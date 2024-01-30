#include "Finding.h"
#include <vector>


Finding::Finding()
{
}


Finding::~Finding()
{
}

char Finding::Tolower(char r)
{
	switch (r)
	{
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	case '�': r = '�'; break;
	default: break;
	}
	return r;
}

int* Finding::fillSample(string name)
{
	int N = name.length();
	int* sample = new int[N];
	for (int i = N - 2; i >= 0; i--) {
		sample[i] = N - i - 1;
		for (int j = N - 2; j > i; j--) {
			if (name[i] == name[j]) {
				sample[i] = sample[j];
				break;
			}
		}
	}
	sample[N - 1] = N;
	for (int i = N - 1; i > -1; i--) {
		if (name[N - 1] == name[i]) {
			sample[N - 1] = sample[i];
			break;
		}
	}
	return sample;
}


int Finding::BoyerMoor(std::string text, string name, int* sample) //����� �� ��������� ����� � ������� ��������� ������ ����
{
	int N = name.length();
	int j = -1;
	int i;
	for (i = N - 2; i < text.length(); i++)
	{
		if (Tolower(text[i]) == Tolower(name[N - 1]))
		{
			for (j = N - 1; j >= 0; j--)
			{
				if (!(Tolower(name[j]) == Tolower(text[i - N + 1 + j])))
					j = -2;
			}
			if (j == -1)
			{
				return (i + 1 - N);
			}
		}
		else
		{
			for (j = N - 1; j >= 0; j--)
			{
				if (Tolower(text[i]) == Tolower(name[j]))
				{
					i += (sample[j] - 1);
					j = -2;
				}
			}
			if (j == -1) {
				i += (sample[N - 1] - 1);
			}
		}
	}
	return -1;
}

Finding* Finding::createFind(find_id id)
{
	Finding* f;
	switch (id)
	{
	case act_find_id:
		f = new ActorFind();
		break;
	case dir_find_id:
		f = new DirectorFind();
		break;
	case play_find_id:
		f = new PlayFind();
		break;
	case date_find_id:
		f = new DataFind();
		break;
	default:
		break;
	}
	return f;
}

int* ActorFind::findID(string name)
{
	int j = 0;
	int* keys = new int[1];
	keys[0] = -1;
	int* sample;
	sample = fillSample(name);
	Actor* actors;
	AddingFIle act_file("actors.txt");
	int n = act_file.actor(&actors);
	for (int i = 0; i < n; i++)
	{
		int num = BoyerMoor(actors[i].get_FIO(), name, sample); //����� ���
		if (num != -1)
		{
			j++;
			int* tkeys = new int[j];
			for (int k = 0; k < j - 1; k++)
				tkeys[k] = keys[k];
			tkeys[j - 1] = actors[i].get_id();
			keys = new int[j];
			for (int k = 0; k < j; k++)
				keys[k] = tkeys[k];
			delete[] tkeys;
			tkeys = 0;
		}
	}
	delete[] sample;
	sample = 0;
	//*N = j;
	ids = keys;
	return keys;
}

SeasonPlay* ActorFind::findplays(int *N)
{
	Season* seas;
	AddingFIle sea_file("seasons.txt");
	int N_seas = sea_file.season(&seas);
	SeasonPlay* allplays;
	*N = 0;
	for (int i = 0; i < N_seas; i++)
	{
		SeasonPlay* temp;
		SeasonPlay* containplays;
		containplays = seas[i].get_plays();
		int num = seas[i].get_num();
		temp = new SeasonPlay[*N + num];
		for (int j = 0; j < (*N); j++)
		{
			temp[j] = allplays[j];
		}
		for (int j = *N; j < *N + num; j++)
		{
			temp[j] = containplays[j - *N];
		}
		*N += num;
		allplays = new SeasonPlay[*N];
		for (int j = 0; j < (*N); j++)
		{
			allplays[j] = temp[j];
		}
	}
	SeasonPlay* foundplays = 0;
	int number = 0;
	int id_num = sizeof(ids) / sizeof(int);
	AddingFIle theplaf("plays.txt");
	Play* theplays;
	int num_of_plays_at_all = theplaf.play(&theplays);
	Play* plays_by_actor;
	for (int i = 0; i < num_of_plays_at_all; i++)
	{
		vector<Trupp_role> trup = theplays[i].get_trup();
		int num_trup = trup.size();
		for (int j = 0; j < id_num; j++)
		{
			for (int k = 0; k < num_trup; k++)
			{
				if (ids[j] == trup[k].get_act().get_id())
				{
					number++;
					Play* temp = new Play[number];
					int m = 0;
					for (m = 0; m < number-1; m++)
					{
						temp[m] = plays_by_actor[m];
					}
					temp[m] = theplays[i];
					plays_by_actor = new Play[number];
					for (m = 0; m < number; m++)
					{
						plays_by_actor[m] = temp[m];
					}
					k = num_trup;
					j = id_num;
				}
			}
		}
	}
	int ans_n = 0;
	for (int i = 0; i < *N; i++)
	{
		for (int j = 0; j < number; j++)
		{
			if (allplays[i].get_plid() == plays_by_actor[j].get_id())
			{
				ans_n++;
				SeasonPlay* temp = new SeasonPlay[ans_n];
				int m = 0;
				for (m = 0; m < ans_n - 1; m++)
				{
					temp[m] = foundplays[m];
				}
				temp[m] = allplays[i];
				foundplays = new SeasonPlay[ans_n];
				for (m = 0; m < ans_n; m++)
				{
					foundplays[m] = temp[m];
				}
			}
		}
	}
	*N = ans_n;
	return foundplays;
}

int* DirectorFind::findID(string name)
{
	int j = 0;
	int* keys = new int[1];
	keys[0] = -1;
	int* sample;
	sample = fillSample(name);
	Director* dirs;
	AddingFIle dir_file("directors.txt");
	int n = dir_file.director(&dirs);
	for (int i = 0; i < n; i++)
	{
		int num = BoyerMoor(dirs[i].get_FIO(), name, sample); //����� ���
		if (num != -1)
		{
			j++;
			int* tkeys = new int[j];
			for (int k = 0; k < j - 1; k++)
				tkeys[k] = keys[k];
			tkeys[j - 1] = dirs[i].get_id();
			keys = new int[j];
			for (int k = 0; k < j; k++)
				keys[k] = tkeys[k];
			delete[] tkeys;
			tkeys = 0;
		}
	}
	delete[] sample;
	sample = 0;
	//*N = j;
	ids = keys;
	return keys;
	return nullptr;
}

SeasonPlay* DirectorFind::findplays(int* N)
{
	Season* seas;
	AddingFIle sea_file("seasons.txt");
	int N_seas = sea_file.season(&seas);
	SeasonPlay* allplays;
	*N = 0;
	for (int i = 0; i < N_seas; i++) //� ���� ����� � ������ ������������ ��� �������
	{
		SeasonPlay* temp;
		SeasonPlay* containplays;
		containplays = seas[i].get_plays();
		int num = seas[i].get_num();
		temp = new SeasonPlay[*N + num];
		for (int j = 0; j < (*N); j++)
		{
			temp[j] = allplays[j];
		}
		for (int j = *N; j < *N + num; j++)
		{
			temp[j] = containplays[j - *N];
		}
		*N += num;
		allplays = new SeasonPlay[*N];
		for (int j = 0; j < (*N); j++)
		{
			allplays[j] = temp[j];
		}
	}
	SeasonPlay* foundplays = 0;
	int number = 0;
	int id_num = sizeof(ids) / sizeof(int);
	AddingFIle theplaf("plays.txt");
	Play* theplays;
	int num_of_plays_at_all = theplaf.play(&theplays);
	Play* plays_by_dir;
	for (int i = 0; i < num_of_plays_at_all; i++) //� ���� ����� �� ������ � ����� ������ ������������ ��� �������
	{
		vector<Trupp_role> trup = theplays[i].get_trup();
		int num_trup = trup.size();
		for (int j = 0; j < id_num; j++)
		{
				if (ids[j] == theplays[i].get_dir().get_id())
				{
					number++;
					Play* temp = new Play[number];
					int m = 0;
					for (m = 0; m < number - 1; m++)
					{
						temp[m] = plays_by_dir[m];
					}
					temp[m] = theplays[i];
					plays_by_dir = new Play[number];
					for (m = 0; m < number; m++)
					{
						plays_by_dir[m] = temp[m];
					}
					continue;
				}
		}
	}
	int ans_n = 0;
	for (int i = 0; i < *N; i++)
	{
		for (int j = 0; j < number; j++)
		{
			if (allplays[i].get_plid() == plays_by_dir[j].get_id())
			{
				ans_n++;
				SeasonPlay* temp = new SeasonPlay[ans_n];
				int m = 0;
				for (m = 0; m < ans_n - 1; m++)
				{
					temp[m] = foundplays[m];
				}
				temp[m] = allplays[i];
				foundplays = new SeasonPlay[ans_n];
				for (m = 0; m < ans_n; m++)
				{
					foundplays[m] = temp[m];
				}
			}
		}
	}
	*N = ans_n;
	return foundplays;
}

int* PlayFind::findID(string name)
{
	int j = 0;
	int* keys = new int[1];
	keys[0] = -1;
	int* sample;
	sample = fillSample(name);
	Play* plays;
	AddingFIle act_file("plays.txt");
	int n = act_file.play(&plays);
	for (int i = 0; i < n; i++)
	{
		int num = BoyerMoor(plays[i].get_name(), name, sample); //����� ���
		if (num != -1)
		{
			j++;
			int* tkeys = new int[j];
			for (int k = 0; k < j - 1; k++)
				tkeys[k] = keys[k];
			tkeys[j - 1] = plays[i].get_id();
			keys = new int[j];
			for (int k = 0; k < j; k++)
				keys[k] = tkeys[k];
			delete[] tkeys;
			tkeys = 0;
		}
	}
	delete[] sample;
	sample = 0;
	//*N = j;
	ids = keys;
	return keys;
}

SeasonPlay* PlayFind::findplays(int* N)
{
	Season* seas;
	AddingFIle sea_file("seasons.txt");
	int N_seas = sea_file.season(&seas);
	SeasonPlay* allplays;
	*N = 0;
	for (int i = 0; i < N_seas; i++) //� ���� ����� � ������ ������������ ��� �������
	{
		SeasonPlay* temp;
		SeasonPlay* containplays;
		containplays = seas[i].get_plays();
		int num = seas[i].get_num();
		temp = new SeasonPlay[*N + num];
		for (int j = 0; j < (*N); j++)
		{
			temp[j] = allplays[j];
		}
		for (int j = *N; j < *N + num; j++)
		{
			temp[j] = containplays[j - *N];
		}
		*N += num;
		allplays = new SeasonPlay[*N];
		for (int j = 0; j < (*N); j++)
		{
			allplays[j] = temp[j];
		}
	}
	SeasonPlay* foundplays = 0;
	int number = 0;
	int id_num = sizeof(ids) / sizeof(int);
	AddingFIle theplaf("plays.txt");
	Play* theplays;
	int num_of_plays_at_all = theplaf.play(&theplays);
	Play* plays_with_name;
	for (int i = 0; i < num_of_plays_at_all; i++) //� ���� ����� �� ������ � ����� ������ ��� ���
	{
		vector<Trupp_role> trup = theplays[i].get_trup();
		int num_trup = trup.size();
		for (int j = 0; j < id_num; j++)
		{
			if (ids[j] == theplays[i].get_id())
			{
				number++;
				Play* temp = new Play[number];
				int m = 0;
				for (m = 0; m < number - 1; m++)
				{
					temp[m] = plays_with_name[m];
				}
				temp[m] = theplays[i];
				plays_with_name = new Play[number];
				for (m = 0; m < number; m++)
				{
					plays_with_name[m] = temp[m];
				}
				continue;
			}
		}
	}
	int ans_n = 0;
	for (int i = 0; i < *N; i++) //� ��� �� ������ � ����� �������� ������������ ��� �����
	{
		for (int j = 0; j < number; j++)
		{
			if (allplays[i].get_plid() == plays_with_name[j].get_id())
			{
				ans_n++;
				SeasonPlay* temp = new SeasonPlay[ans_n];
				int m = 0;
				for (m = 0; m < ans_n - 1; m++)
				{
					temp[m] = foundplays[m];
				}
				temp[m] = allplays[i];
				foundplays = new SeasonPlay[ans_n];
				for (m = 0; m < ans_n; m++)
				{
					foundplays[m] = temp[m];
				}
			}
		}
	}
	*N = ans_n;
	return foundplays;
}

int* DataFind::findID(string name)
{
	return nullptr;
}

SeasonPlay* DataFind::findplays(int* N)
{
	return nullptr;
}
