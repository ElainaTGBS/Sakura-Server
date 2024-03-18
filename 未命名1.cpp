
/*
	Name: 表达式计算器
	Copyright: 后藤石井 2024 
	Author: Users 
	Date: 11/03/24 14:45
	Description: 
	
	目前只支持+和- 
*/

#include<iostream>
#include<cmath>
#include<string>
#include<stdlib.h>

using namespace std;




int main(){
	
	system("title 计算器");
	
    
    //math.insert(math.begin(),'+');//字符串头部插入+
	

    
    
    int out=0;//最终输出 
    
    int upxy=0;//上一个符号位置 
    
    char symbol='+';//储存即将进行的运算方式（第一次为0+'number')
    
    
    //char inter[2]={'+','-'};
    rerun:
    	
    
    string math;
    cin>>math;//输入表达式 
    
    
    for(int i=0;i<math.size();i++){
    	//math.substr(upxy,i-1);
				
		if(math[i]=='+'||math[i]=='-'||i==math.size()-1){//如果发现此位是运算符号 
			if(symbol=='+') out=out+atoi(math.substr(upxy,i).c_str());//运算+ 
			else if(symbol=='-') out=out-atoi(math.substr(upxy,i).c_str());//运算-
		}
		else if(math=="stop") return true;
		
		
		
		//修改下次的计算模式 
		if(math[i]=='+') symbol='+';
    	else if(math[i]=='-') symbol='-';
		
    	
    	
    	

	}
	
	
	cout<<out;
	goto rerun;
}
