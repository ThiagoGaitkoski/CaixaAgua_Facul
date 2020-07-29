#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float mes[13];
	float max, gasto, sobra;

	//COMEÇO JANEIRO
	printf("Digite o máximo de milímetros da sua caixa d'água: \n");
	scanf_s("%f", &max);

	printf("Quantos milímetros de chuva tivemos em Janeiro: \n");
	scanf_s("%f", &mes[0]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = max + mes[0] - gasto; //Cálculo de Janeiro
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n\n\n");
	}//FIM JANEIRO

	printf("\n");

	//COMEÇO FEVEREIRO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[1]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	printf("\n");

	sobra = sobra + mes[1] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n\n\n");
	}//FIM FEVEREIRO

	printf("\n");

	//COMEÇO MARÇO
	printf("Quantos milímetros de chuva tivemos em Março: \n");
	scanf_s("%f", &mes[2]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[2] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM MARÇO

	printf("\n");

	//COMEÇO ABRIL
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[3]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[3] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM ABRIL

	printf("\n");

	//COMEÇO MAIO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[4]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[4] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}// FIM MAIO

	printf("\n");

	//COMEÇO JUNHO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[5]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[5] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM JUNHO

	printf("\n");

	// COMEÇO JULHO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[6]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[6] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM JULHO

	printf("\n");

	//COMEÇO AGOSTO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[7]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[7] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM AGOSTO

	printf("\n");

	//COMEÇO SETEMRBO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[8]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[8] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM SETEMBRO

	printf("\n");

	//COMEÇO OUTUBRO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[9]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[9] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM OUTUBRO

	printf("\n");

	//COMEÇO NOVEMBRO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[10]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[10] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM NOVEMBRO

	printf("\n");

	//COMEÇO DEZEMBRO
	printf("Quantos milímetros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[11]);

	printf("Quantos milímetros foram gasto nesse mês: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[11] - gasto;
	printf("O Reservatório está com %.2f milímetros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVATÓRIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVATÓRIO CHEIO!!!\n");
	}//FIM DEZEMBRO

	system("pause");
	return 0;
}