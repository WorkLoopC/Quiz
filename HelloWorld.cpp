#include <iostream>
#include <limits>

int main() {
int player;
int total=0;
std::string questions[]={"Who is da best monke:",
                        "Which animal is the silliest",
                        "Which FPS game is the most based"};
std::cout<<"***************************************\n";
std::cout<<"Welcum to da quiz game\n";
std::cout<<"Choose your answers carefully you silly goose\n";
std::cout<<questions[0]<<'\n';
std::string options[][3]={"1-Orangutan","2-Gorilla","3-Chimpanzee",
                            "1-Dog","2-Cat","3-Panda",
                            "1-CSGO","2-Valorant","3-Overwatch"};
int rows = sizeof(options)/sizeof(options[0]);
int columns = sizeof(options[0])/sizeof(options[0][0]);                       
for(int j=0;j<columns;j++){
std::cout<<options[0][j]<<'\n';}
do{
std::cin>>player;
if(player==1){
total++;    
std::cout<<"***CORRECT***\n";}
else if(player==2){
std::cout<<"***NU UH WRONG***\n";}
else if(player==3){
std::cout<<"***NU UH WRONG***\n";}
else{
std::cout<<"Please type a valid answer\n"; 
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
}while(player !=1 && player !=2 && player!=3);
/////////////////////////////////////////////////////////////////////////////////////
std::cout<<questions[1]<<'\n';
int rows1 = sizeof(options)/sizeof(options[0]);
int columns1 = sizeof(options[0])/sizeof(options[0][0]);  
for(int j=0;j<columns;j++){  
std::cout<<options[1][j]<<'\n';}
do{
std::cin>>player;
if(player==1){
std::cout<<"***NU UH WRONG***\n";}
else if(player==2){
std::cout<<"***NU UH WRONG***\n";}
else if(player==3){
total++;
std::cout<<"***CORRECT***\n";}
else{
std::cout<<"Please type a valid answer\n"; 
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
}while(player !=1 && player !=2 && player!=3);
/////////////////////////////////////////////////////////////////////////////////////
std::cout<<questions[2]<<'\n';
int rows2 = sizeof(options)/sizeof(options[0]);
int columns2 = sizeof(options[0])/sizeof(options[0][0]);  
for(int j=0;j<columns;j++){  
std::cout<<options[2][j]<<'\n';}
do{
std::cin>>player;
if(player==1){
total++;
std::cout<<"***CORRECT***\n";}
else if(player==2){
std::cout<<"***NU UH WRONG***\n";}
else if(player==3){
std::cout<<"***NU UH WRONG***\n";}
else{
std::cout<<"Please type a valid answer\n"; 
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
}while(player !=1 && player !=2 && player!=3);
std::cout<<"*****************************\n";
std::cout<<"RESULTS\n";
std::cout<<"*****************************\n";
std::cout<<"You answered correctly "<<total<<" out of 3 questions";
return 0;
}





