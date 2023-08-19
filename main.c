#include <stdio.h>

int main() {
    float horas, valor, salario_bruto,salario_sind, salario_fgts, salario_inss;
    printf("Quantas horas voce trabalha por dia ?");
    scanf("%f",&horas);
    printf("Quanto voce recebe por hora?");
    scanf("%f",&valor);

    salario_bruto = (((horas * valor)*6)*4);
    salario_sind =  (salario_bruto * 3) / 100;
    salario_fgts = (salario_bruto * 11)/ 100;
    salario_inss = (salario_bruto * 10) / 100;

    if (salario_bruto <= 900){
        float ir;
        printf("Salariobruto:%.1f:\n",salario_bruto);
        printf("Desconto sindicato:%.1f:\n", salario_sind);
        printf("Desconto fgts:%.f:\n",salario_fgts);
        printf("Desconto inss:%.1f:\n",salario_inss);
        printf("Desconto ir:Isento:\n");
        printf("Salario liquido :%.1f:\n", salario_bruto - salario_sind - salario_fgts - salario_inss);
    }

    if (salario_bruto > 900 && salario_bruto <= 1500){
        float ir;
        ir = (salario_bruto * 5) / 100;
        printf("Salario Bruto:%.1f:\n", salario_bruto);
        printf("Desconto do sindicato:%.1f:", salario_sind);
        printf("Desconto do fgts:%.1f:\n", salario_fgts);
        printf("Desconto do inss:%.1f:\n", salario_inss);
        printf("Desconto do ir :%.1f:\n",ir);
        printf("Salario liquido:%.1f:\n", salario_bruto - ir - salario_sind - salario_fgts - salario_inss);

    }
    if (salario_bruto > 1500 && salario_bruto <= 2500){
        float ir;
        ir = (salario_bruto * 10) / 100;
        printf("Salariobruto:%.1f:\n",salario_bruto);
        printf("Desconto sindicato:%.1f:\n", salario_sind);
        printf("Desconto fgts:%.f:\n",salario_fgts);
        printf("Desconto inss:%.1f:\n",salario_inss);
        printf("Desconto ir:%.1f:\n", ir);
        printf("Salario liquido :%.1f:\n", salario_bruto - ir - salario_sind - salario_fgts - salario_inss);

    }
    if (salario_bruto > 2500){
        float ir;
        ir = (salario_bruto * 20) / 100;
        printf("Salariobruto:%.1f:\n",salario_bruto);
        printf("Desconto sindicato:%.1f:\n", salario_sind);
        printf("Desconto fgts:%.f:\n",salario_fgts);
        printf("Desconto inss:%.1f:\n",salario_inss);
        printf("Desconto ir:%.1f:\n", ir);
        printf("Salario liquido :%.1f:\n", salario_bruto - ir - salario_sind - salario_fgts - salario_inss);

    }

};
