#include"Quence.h"
int main()
{
	Que* quence = InitQue();
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:InQue(quence);
			break;
		case 2:Prin(quence);
			break;
		case 3:Dele(quence);
			break;
		case 4:Find(quence);
			break;
		case 5:Modify(quence);
			break;
		default:
			if (input != 0)
			{
				printf("�������!!!����������:>\n");
			}
			break;
		}
	} while (input);
	printf("ϵͳ�˳��ɹ�\n");
	Destroy(quence);
	return 0;
}