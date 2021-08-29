#include<iostream>
#include<ctime>

using namespace std;

int levelIntro(int difficulty){
    cout<< "\nLevel"<<difficulty<<endl;   
    return 0;
}

int tripleX(int difficulty){
    const int CodeA = rand() % (difficulty) + difficulty;
    const int CodeB = rand() % (difficulty) + difficulty;
    const int CodeC = rand() % (difficulty) + difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    levelIntro(difficulty);
    cout<< "\n There are three numbers in the code"<<endl;
    cout<< "\n The numbers add up to "<<CodeSum<<endl;
    cout<< "\n The numbers multiply to give "<<CodeProduct<<endl;

    int GuessA, GuessB, GuessC;
    cin>>GuessA>>GuessB>>GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
        cout<<"\n Well done, you have successfully solved the code! Go to the next level!";
        return true;
    }
    else{
        cout<<"\n You guessed the wrong code, they are alerted!!!";
        return false;
    }

}


int gameIntro(){
    cout<< "\nYou are a grieving father, your daughter has been taken away for evolutionary experiments by top secret agents"<<endl;
    cout<< "\nYou require a specific set of codes which work as keys to infiltrate the base and take your daughter back home to safety!!"<<endl;
    cout<< "\nThere's no failing, if they find out you are here, they'll take you in for there gruesome experiments as well!!"<<endl;
    cout<< "\nGo and save your daughter, time is ticking"<<endl;   
    return 0;
}


int main(){
    time_t now = time(0);
    srand(time(NULL));

    int level = 1;
    int const maxLevel = 10;
    
    gameIntro();
    while(level<=maxLevel){
        bool levelUp = tripleX(level);
        cin.clear();
        cin.ignore();
        if(levelUp) level++;
    }

    cout<<"\n You've arived just in time. General Marshivel was just about to inject some deadly poison into your daughter!!"<<endl;
    cout<<"\n You run up to him and a big ifght ensues!!"<<endl;
    cout<<"\n He tries to inject the poison in you, but you deflect it and the syringe ends up into General Marshivel's eye"<<endl;
    cout<<"\n You see him cry in pain blood in his eyes, and his body shaking!! You decide to run with your daughter!"<<endl;
    cout<<"\n You open the door and ask your daughter to run and start the car!!"<<endl;
    cout<<"\n You get into the car and run away!!!"<<endl;
    cout<<"\nGAME OVER"<<endl;

    return 0;
}
