#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	

  	
int quantidadecrimes;
int quantidademeses;
int artigos(50);
int artigosm(50);
string escolha;
string escolha2;



// Multas dos artigos // ARTIGO 8 E 9 EM ATT //

int a1=25000, a2=35000, a3=12500, a4=30000, a5=40000, a6=15000, a9=45000, a10=37500;
int a11=35000, a12=30000, a13=35000, a14=25000, a15=30000, a16=40000, a17=15000, a18=30000, a19=60000, a20=160000;
int a21=150000, a22=180000, a23=200000, a24=35000, a25=75000, a26=15000, a27=75000, a28=65000, a29=40000, a30=100000;

// MESES DOS ARTIGOS // 8 E 9 EM ATT //

int am1=20, am2=20, am3=5, am4=25, am5=20, am6=10, am9=35, am10=35;
int am11=30, am12=25, am13=30, am14=15, am15=25, am16=25, am17=20, am18=15, am19=35, am20=35;
int am21=50, am22=60, am23=60, am24=35, am25=60, am26=20, am27=35, am28=35, am29=25, am30=45;

// INICIO DO SOFTWARE //

    cout<<  "                             ATOMIC ROLEPLAY TODOS DIREITOS RESERVADOS\n ";
	
	cout << "\nArt. 1  FARDA POLICIAL\n"; 
	cout << "Art. 2  PORTE ILEGAL DE ARMA/COLETE\n";
	cout << "Art. 3  MASCARA \n";
	cout << "Art. 4  ROUBO/FURTO\n";
	cout << "Art. 5  LESAO CORPORAL/AMEACA\n";
	cout << "Art. 6  RESISTENCIA A PRISAO\n";
    cout << "Art. 7  TRAFICO DE DROGAS\n";
	cout << "Art. 8  DINHEIRO SUJO\n";
	cout << "Art. 9  OCULTACAO DE PROVA\n";
	cout << "Art. 10 ATENTADO AO PUDOR/ASSEDIO\n";
	cout << "Art. 11 FALSIDADE IDEOLOGICA\n";
	cout << "Art. 12 CALUNIA OU DIFAMACAO\n";
	cout << "Art. 13 TRAFICO DE ARMAS/MUNICAO\n";
	cout << "Art. 14 TENTATIVA DE SUBORNO\n";
	cout << "Art. 15 DESACATO\n";
	cout << "Art. 16 DANO AO PATRIMONIO PUBLICO\n";
	cout << "Art. 17 DESOBEDIENCIA A ORDEM POLICIAL\n";
	cout << "Art. 18 TENTATIVA DE ROUBO\n";
	cout << "Art. 19 CORRUPCAO\n";
	cout << "Art. 20 LATROCINO C/OBITO\n";
	cout << "Art. 21 HOMICIDIO\n";
	cout << "Art. 22 HOMICIDIO QUALIFICADO(SÓ COM VIDEO/POR P.\n";
	cout << "Art. 23 HOMICIDIO (SERVIDOR PUBLICO)\n";
	cout << "Art. 24 LATROCINIO\n";
	cout << "Art. 25 ESTUPRO\n";
	cout << "Art. 26 INVASAO DE PRIVACIDADE\n";
	cout << "Art. 27 TENTATIVA DE HOMICIDIO\n";
	cout << "Art. 28 SEQUESTRO\n";
	cout << "Art. 29 EXTORSAO\n";
	cout << "Art. 30 TENTATIVA DE HOMICIDIO(SERVIDOR PUBLICO)\n\n";





									// ###### FIM DOS ARTIGOS ######
									
//VARIAVEIS DE SOMA 
	
int q;
int somademultas;
artigos=-1;



cout << "Quantos crimes ? ";
cin >> quantidadecrimes;

	for( q; q < quantidadecrimes; q++){		
    
		cout << "Qual artigo ? ";
   		cin >> artigos;
		q;
			
			

			if(artigos==1){
			artigos=a1;
				
	}
			
			if(artigos==2){
			artigos=a2;
		
	}
				
			if(artigos==3){
			artigos=a3;
		
	}				
			if(artigos==4){
			artigos=a4;
		
	}				
			if(artigos==5){
			artigos=a5;
		
	}				
			if(artigos==6){
			artigos=a6;
		
	}				
			if(artigos==7){
			artigos=0;
		
	}				
			if(artigos==8){
			artigos=0;
		
	}				
			if(artigos==9){
			artigos=a9;
		
	}				
			if(artigos==10){
			artigos=a10;
		
	}				
			if(artigos==11){
			artigos=a11;
		
	}				
			if(artigos==12){
			artigos=a12;
		
	}				
			if(artigos==13){
			artigos=a13;
		
	}				
			if(artigos==14){
			artigos=a14;
		
	}				
			if(artigos==15){
			artigos=a15;
		
	}				
			if(artigos==16){
			artigos=a16;
		
	}				
			if(artigos==17){
			artigos=a17;
		
	}				
			if(artigos==18){
			artigos=a18;
		
	}				
			if(artigos==19){
			artigos=a19;
		
	}				
			if(artigos==20){
			artigos=a20;
		
	}				
			if(artigos==21){
			artigos=a21;
		
	}				
			if(artigos==22){
			artigos=a22;
		
	}				
			if(artigos==23){
			artigos=a23;
		
	}				
			if(artigos==24){
			artigos=a24;
		
	}				
			if(artigos==25){
			artigos=a25;
		
	}				
			if(artigos==26){
			artigos=a26;
		
	}				
			if(artigos==27){
			artigos=a27;
		
	}				
			if(artigos==28){
			artigos=a28;
		
	}				
			if(artigos==29){
			artigos=a29;
		
	}				
			if(artigos==30){
			artigos=a30;
		
	}




// SOMA DE TODOS ARTIGOS ESCOLHIDOS !


somademultas=somademultas+artigos;           

			
			if(somademultas>=600000){
			
			cout << "O MILIANTE TERA QUE PAGAR R$ 600.000 Multa MAXIMA !! \n";	
			system("pause");				 
				 
}
			}
			
// ###### fim da soma  ########
			



// ### IMPRIME O TOTAL DE MULTAS #####
	       
		 
	        
            cout << "O MILIANTE TERA QUE PAGAR R$" << somademultas << " DE MULTA !!\n";
            
			cout << "GOSTARIA DE CALCULAR MAIS MULTAS? ";	
			 	
			 	cin >> escolha;
				 
				 	if(escolha=="sim"){
			 	    system("cls");
					cout << "ENTAO REABRA O PROGRAMA !!!!" ;
			 		
			 		
				 		}else{
				 	      system("cls");
			 }
			 
			 
// ## CALCULO DE MESES


int i;
int somameses;
artigosm;




     	for( i; i < quantidadecrimes; i++){		
    
		cout << "Quais artigos (PARA CALCULAR OS MESES) ";
   		cin >> artigosm;
		i;
		
		
			if(artigosm==1){
			artigosm=am1;
				
	}
			
			if(artigosm==2){
			artigosm=am2;
		
	}
				
			if(artigosm==3){
			artigosm=am3;
		
	}				
			if(artigosm==4){
			artigosm=am4;
		
	}				
			if(artigosm==5){
			artigosm=am5;
		
	}				
			if(artigosm==6){
			artigosm=am6;
		
	}				
			if(artigosm==7){
			artigosm=0;
		
	}				
			if(artigosm==8){
			artigosm=0;
		
	}				
			if(artigosm==9){
			artigosm=am9;
		
	}				
			if(artigosm==10){
			artigosm=am10;
		
	}				
			if(artigosm==11){
			artigosm=am11;
		
	}				
			if(artigosm==12){
			artigosm=am12;
		
	}				
			if(artigosm==13){
			artigosm=am13;
		
	}				
			if(artigosm==14){
			artigosm=am14;
		
	}				
			if(artigosm==15){
			artigosm=am15;
		
	}				
			if(artigosm==16){
			artigosm=am16;
		
	}				
			if(artigosm==17){
			artigosm=am17;
		
	}				
			if(artigosm==18){
			artigosm=am18;
		
	}				
			if(artigosm==19){
			artigosm=am19;
		
	}				
			if(artigosm==20){
			artigosm=am20;
		
	}				
			if(artigosm==21){
			artigosm=am21;
		
	}				
			if(artigosm==22){
			artigosm=am22;
		
	}				
			if(artigosm==23){
			artigosm=am23;
		
	}				
			if(artigosm==24){
			artigosm=am24;
		
	}				
			if(artigosm==25){
			artigosm=am25;
		
	}				
			if(artigosm==26){
			artigosm=am26;
		
	}				
			if(artigosm==27){
			artigosm=am27;
		
	}				
			if(artigosm==28){
			artigosm=am28;
		
	}				
			if(artigosm==29){
			artigosm=am29;
		
	}				
			if(artigosm==30){
			artigosm=am30;
		
	}  
	

somameses=somameses+artigosm;

    		if(somameses>=60){
			
			cout << "O MILIANTE TERA QUE PAGAR 60 DE PENA MAXIMA !! \n";	
			system("pause");		
			 
}
}

cout << "O MILIANTE TERA QUE PARAR " << somameses << " DE PENA !! ";    

			 
	return 0;
	
}



