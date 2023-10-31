#include <stdio.h>
  
int main(int argc, char** argv) {
	float Quant_filme_retirada, numero_C;
	int i;
	int TAM_MAX=500;
	

	cout<<"Informe a quantidade de filme retirada no ano"<<endl;
	cin>>Quant_filme_retirada;

	
	cout<<"Informe a quantidade de clientes"<<endl;
	cin>>numero_C;
			
	for(int i=0;i<numero_C;i++){
		float retirado_cliente;
		cout<<"Informe o numero retirado pelo cliente"<<i+1<<endl;
		cin>>retirado_cliente;
	
	if(retirado_cliente>=15){
		cout<<"O cliente "<<i<<" tem direito a uma locacao gratuita"<<endl;
	}
	}


	return 0;
}