#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float mes[13];
	float max, gasto, sobra;

	//COME�O JANEIRO
	printf("Digite o m�ximo de mil�metros da sua caixa d'�gua: \n");
	scanf_s("%f", &max);

	printf("Quantos mil�metros de chuva tivemos em Janeiro: \n");
	scanf_s("%f", &mes[0]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = max + mes[0] - gasto; //C�lculo de Janeiro
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n\n\n");
	}//FIM JANEIRO

	printf("\n");

	//COME�O FEVEREIRO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[1]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	printf("\n");

	sobra = sobra + mes[1] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n\n\n");
	}//FIM FEVEREIRO

	printf("\n");

	//COME�O MAR�O
	printf("Quantos mil�metros de chuva tivemos em Mar�o: \n");
	scanf_s("%f", &mes[2]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[2] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM MAR�O

	printf("\n");

	//COME�O ABRIL
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[3]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[3] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM ABRIL

	printf("\n");

	//COME�O MAIO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[4]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[4] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}// FIM MAIO

	printf("\n");

	//COME�O JUNHO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[5]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[5] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM JUNHO

	printf("\n");

	// COME�O JULHO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[6]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[6] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM JULHO

	printf("\n");

	//COME�O AGOSTO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[7]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[7] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM AGOSTO

	printf("\n");

	//COME�O SETEMRBO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[8]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[8] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM SETEMBRO

	printf("\n");

	//COME�O OUTUBRO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[9]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[9] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM OUTUBRO

	printf("\n");

	//COME�O NOVEMBRO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[10]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[10] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM NOVEMBRO

	printf("\n");

	//COME�O DEZEMBRO
	printf("Quantos mil�metros de chuva tivemos em Fevereiro: \n");
	scanf_s("%f", &mes[11]);

	printf("Quantos mil�metros foram gasto nesse m�s: \n");
	scanf_s("%f", &gasto);

	sobra = sobra + mes[11] - gasto;
	printf("O Reservat�rio est� com %.2f mil�metros\n", sobra);
	if (sobra < 0)
	{
		printf("RESERVAT�RIO VAZIO!!!\n");
	}if (sobra > max)
	{
		printf("RESERVAT�RIO CHEIO!!!\n");
	}//FIM DEZEMBRO

	system("pause");
	return 0;
}