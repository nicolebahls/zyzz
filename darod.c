#include<stdio.h>
#include<strings.h>

void dir(char *str, char *dir){
	
	int i=0, k=0;
	int anterior, ini_dir_word;
	int achou=1;
	//caso * no começo
	if(str[0] == '*'){
		
		
		
	while(dir[i] != '\0'){
	
		k=strlen(str)-1;
		for(;dir[i] != ' ' && dir[i] != '\0'; i++);
		anterior=i; //anterior é o valor do espaço em branco
		i--;
		for(;i > 0 && k > 0 && dir[i] != ' ';){
			
			if(str[k] != dir[i]){
				
				achou = 0;
				break;
			}
			
			i--;
			k--;
			
			
		}
		
		i=anterior-1;
		
		if(achou == 1){
			for(;dir[i] != ' ' && i >= 0;i--);//pra inverter a ordem e imprimir em ordem
			if(i != 0)i++;
			for(;dir[i] != ' ' && i < strlen(dir);i++){
				printf("%c", dir[i]);
			}
			printf(" ");
		}
		achou = 1;
		i=anterior+1;
		
	}
		
	} else { //caso fim
	
	
	
	
	if(str[strlen(str) - 1] != '*'){
		
		while(dir[i] != '\0'){
	
		k=strlen(str)-1;
		if(i == 0){
			ini_dir_word = 0;
		} 
		for(;dir[i] != ' ' && dir[i] != '\0'; i++);
		anterior=i; //anterior é o valor do espaço em branco
		i--;
		for(;i > 0 && k > 0 && dir[i] != ' ' && str[k] != '*';){
			
			
			
			if(str[k] != dir[i]){
				achou = 0;
				break;
			}
			
			i--;
			k--;
			
			
		}
		if(achou == 1){//segunda parte Jon SkyWalker do teste
			k=0;
			i=ini_dir_word;
			
			for(;i < strlen(dir) && k < strlen(str) && dir[i] != ' ' && str[k] != '*';){
			
			
			
			if(str[k] != dir[i]){
				achou = 0;
				break;
			}
			
			i++;
			k++;
			
			
		}
			
			
		}
		
		if(achou == 1){
			i=ini_dir_word;
			for(;dir[i] != ' ' && i < strlen(dir);i++){
				printf("%c", dir[i]);
			}
			printf(" ");
		}
		ini_dir_word = anterior + 1;
		achou = 1;
		i=anterior+1;
		
	}//fim while
		
	}else{
	
	
	
	while(dir[i] != '\0'){
	
		k=0;
		for(;i < strlen(dir) && k < strlen(str) && dir[i] != ' ' && str[k] != '*';){
			
			if(str[k] != dir[i]){
				
				achou = 0;
				break;
			}
			
			i++;
			k++;
			
			
		}
		
		
		if(achou == 1){
			for(;dir[i] != ' ' && i >= 0;i--);//pra inverter a ordem e imprimir em ordem
			i++;
			for(;dir[i] != ' ' && i < strlen(dir);i++){
				printf("%c", dir[i]);
			}
			i++;
			printf(" ");
		}else{
			while(dir[i]!= ' ')i++;
			i++;
		}
		achou = 1;
		
	}
	
	
	
	
	
	}//fim if
	

	
	
	} 
	
	
}








int main(){
	char str[15] = "a*doca", dirzero[60] = "bzcuata.doc at2a.doc bzVRAUata.docas abzaecuzaoata.doca";
	dir(str, dirzero);
	return 0;
}
