
/*
	Name: ���ʽ������
	Copyright: ����ʯ�� 2024 
	Author: Users 
	Date: 11/03/24 14:45
	Description: 
	
	Ŀǰֻ֧��+��- 
*/

#include<iostream>
#include<cmath>
#include<string>
#include<stdlib.h>

using namespace std;




int main(){
	
	system("title ������");
	
    
    //math.insert(math.begin(),'+');//�ַ���ͷ������+
	

    
    
    int out=0;//������� 
    
    int upxy=0;//��һ������λ�� 
    
    char symbol='+';//���漴�����е����㷽ʽ����һ��Ϊ0+'number')
    
    
    //char inter[2]={'+','-'};
    rerun:
    	
    
    string math;
    cin>>math;//������ʽ 
    
    
    for(int i=0;i<math.size();i++){
    	//math.substr(upxy,i-1);
				
		if(math[i]=='+'||math[i]=='-'||i==math.size()-1){//������ִ�λ��������� 
			if(symbol=='+') out=out+atoi(math.substr(upxy,i).c_str());//����+ 
			else if(symbol=='-') out=out-atoi(math.substr(upxy,i).c_str());//����-
		}
		else if(math=="stop") return true;
		
		
		
		//�޸��´εļ���ģʽ 
		if(math[i]=='+') symbol='+';
    	else if(math[i]=='-') symbol='-';
		
    	
    	
    	

	}
	
	
	cout<<out;
	goto rerun;
}
