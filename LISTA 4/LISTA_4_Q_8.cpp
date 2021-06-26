#include <stdio.h>

main()

{
	int hi, mi, hf, mf, hd1, md1, hd2, md2;
	
	printf("Digite a hora no inicio do jogo: ");
	scanf("%d",&hi);
	printf("Digite os minutos no inicio do jogo: ");
	scanf("%d",&mi);
	printf("Digite a hora no final do jogo: ");
	scanf("%d",&hf);
	printf("Digite os minutos no final do jogo: ");
	scanf("%d",&mf);
	
	if (hi<hf){
		md1 = mf-mi;
		if (md1 > 0)
			hd1 = hf - hi;
			else
			if (md1 < 0)
			hd1 = hf - hi - 1;
			md1 = (60-md1);
}
	if (hi>hf){
		md2 = mf - mi;
		if (md2 > 0)
			hd2 = (24-(hi-hf)-1);
			else
			if (md2 <0)
			hd2 = (24-(hi-hf));
			md2 = (60-md2);
}

	if (hi<hf)
	printf("A duracao do jogo foi de %d horas e %d minutos", hd1, md1);
	else
	if (hi>hf)
	printf("A duracao do jogo foi de %d horas e %d minutos", hd2, md2);
	
}
