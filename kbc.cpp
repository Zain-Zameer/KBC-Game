#include<iostream>
using namespace std;
    
int main(){
    // Questions of Quiz
    string questions[] = {
    "How many stanzas are there in Pakistan's National Anthem ?",
    "What was the old name of PIA ?",
    "What official name was given to Pakistan in 1956 constitution ?",
    "In which year Pakistan became a Republic ?",
    "Who was the founder of Faraizi Movement in 1802 ?",
    "What is the meaning of Pakistan ?",
    "According to population, which is the largest city in Pakistan ?",
    "According to land, which is the largest city in Pakistan ?",
    "Which one is the biggest shoes factory in Pakistan ?",
    "How many languages are spoken in Pakistan ?",
    "What is the name of the highest peak of Pakistan ?",
    "Who designed Pakistan's national flag ?",
    "Who was the founder of C language ?",
    "What is the national flower of Pakistan ?",
    "Which language has the more native speakers ?"
    }; 

    // Choices A of questions
    string choicesA[] = {
        "One", // question 1 choice a
        "Asia Airways", // question 2 choice a
        "Islamic Republic", // question 3 choice a
        "1966", // question 4 choice a
        "Haji Shariat Ullah", // question 5 choice a
        "PeaceFul Land", // question 6 choice a
        "Islamabad", // question 7 choice a
        "Karachi", // question 8 choice a
        "Service", // question 9 choice a
        "3", // question 10 choice a
        "K2", // question 11 choice a
        "Amiruddin Kidwai", // question 12 choice a
        "Jeff Bezoz", // question 13 choice a
        "Gulab", // question 14 choice a
        "English", // question 15 choice a
    };
    // Choices B of questions
    string choicesB[] = {
        "Two", // question 1 choice b
        "Orient Airways", // question 2 choice b
        "South Republic", // question 3 choice b
        "1954", // question 4 choice b
        "Haji Anayat Ullah", // question 5 choice b
        "The Land Of The Paks", // question 6 choice b
        "Lahore", // question 7 choice b
        "Islamabad", // question 8 choice b
        "Gucci", // question 9 choice b
        "14", // question 10 choice b
        " Mount Everest", // question 11 choice b
        "Allama Iqbal", // question 12 choice b
        "Dennis Ritchi", // question 13 choice b
        "Sun Flower", // question 14 choice b
        "Spanish", // question 15 choice b
    };
    // Choices C of questions
    string choicesC[] = {
        "Three", // question 1 choice c
        "Islam Airline", // question 2 choice c
        "Asian Republic", // question 3 choice c
        "1967", // question 4 choice c
        "Quaid-e-Azam", // question 5 choice c
        "Islamic Place", // question 6 choice c
        "Karachi", // question 7 choice c
        "Lahore", // question 8 choice c
        "Bata", // question 9 choice c
        "7", // question 10 choice c
        "Himalaya Mountain", // question 11 choice c
        "Fatima Jinnah", // question 12 choice c
        "Bill Gates", // question 13 choice c
        "Jasmine", // question 14 choice c
        "French", // question 15 choice c
    };
    // Choices D of questions
    string choicesD[] = {
        "Four", // question 1 choice d
        "China Airways", // question 2 choice d
        "1956 Republic", // question 3 choice d
        "1956", // question 4 choice d
        "Mohammad Ali Jinnah", // question 5 choice d
        "La Illa Ha Illal Lah", // question 6 choice d
        "Peshawar", // question 7 choice d
        "Peshawar", // question 8 choice d
        "Balenciaga", // question 9 choice d
        "77", // question 10 choice d
        "Denali", // question 11 choice d
        "Mohammad Ali Jinnah", // question 12 choice d
        "No One", // question 13 choice d
        "Tulip", // question 14 choice d
        "Chinese", // question 15 choice d
    }; 
    //Answers of Questions
    string answersOfQuestions[] = {
        "c", // Answer Of 1
        "b", // Answer Of 2
        "a", // Answer Of 3
        "d", // Answer of 4
        "a", // Answer Of 5
        "b", // Answer Of 6
        "c", // Answer Of 7
        "a", // Answer Of 8
        "c", // Answer Of 9
        "d", // Answer Of 10
        "a", // Answer of 11
        "a", // Answer Of 12
        "b", // Answer Of 13
        "c", // Answer Of 14
        "d" // Answer Of 15
        
        }; 

    // Declaring Variables
    string selectAns;
    int lifeLine;
    int fiftyFifty = 1;
    int phoneAFriend = 1;
    int audienceVote = 1;
    int questionsComplete = 0;
    string userName;
    // Welcoming Our User.
    cout<<"-----------------------------------"<<endl;
    cout<<"________KON_BANEGA_CRORE_PATTI_____"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<endl;
    cout<<"Muhammad Zain: Hey, Welcome ! So what's your name ? "<<endl;
    cout<<"Enter Your Name: ";
    cin>>userName;
    cout<<"Muhammad Zain: Hmmm, Nice Name !"<<endl;
    cout<<"Muhammad Zain: So, let's start the game."<<endl;


    for (int i = 0; i < 15; i++)
    {
        questionsComplete = questionsComplete;
        if(questionsComplete!=15){
            cout<<"                                                                   press l for lifeline"<<endl;
            cout<<endl;
            cout<<"                                                                   50-50: "<<fiftyFifty<<endl;
            cout<<"                                                                   Phone A Friend: "<<phoneAFriend<<endl;
            cout<<"                                                                   Audience Vote: "<<audienceVote<<endl;
            cout<<questions[i]<<endl;
            cout<<"A) "<<choicesA[i]<<"            B) "<<choicesB[i]<<endl;
            cout<<"C) "<<choicesC[i]<<"            D) "<<choicesD[i]<<endl;
            cout<<"Select: ";
            cin>>selectAns;
            if(selectAns == answersOfQuestions[i]){
                questionsComplete = questionsComplete + 1;
                cout<<"Muhammad Zain: Sahi jawab "<<userName<<endl;
                cout<<"Muhammad Zain: Next Question is on your screen! "<<endl;
                if(questionsComplete==1){
                    cout<<"Muhammad Zain: Congrats You Have Won 5000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==2){
                    cout<<"Muhammad Zain: Congrats You Have Won 10,000 Rupees"<<endl;

                }
                else if(questionsComplete==3){
                    cout<<"Muhammad Zain: Congrats You Have Won 20,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==4){
                    cout<<"Muhammad Zain: Congrats You Have Won 40,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==5){
                    cout<<"Muhammad Zain: Congrats You Have Won 80,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==6){
                    cout<<"Muhammad Zain: Congrats You Have Won 1,60,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==7){
                    cout<<"Muhammad Zain: Congrats You Have Won 3,20,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==8){
                    cout<<"Muhammad Zain: Congrats You Have Won 6,40,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==9){
                    cout<<"Muhammad Zain: Congrats You Have Won 12,50,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==10){
                    cout<<"Muhammad Zain: Congrats You Have Won 25,00,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==11){
                    cout<<"Muhammad Zain: Congrats You Have Won 50,00,000 Rupees"<<endl;
                    
                }
                else if(questionsComplete==12){
                    cout<<"Muhammad Zain: Congrats You Have Won 1 Crore Rupees"<<endl;
                    
                }
                else if(questionsComplete==13){
                    cout<<"Muhammad Zain: Congrats You Have Won 3 Crore Rupees"<<endl;
                    
                }
                else if(questionsComplete==14){
                    cout<<"Muhammad Zain: Congrats You Have Won 5 Crore Rupees"<<endl;
                    
                }
                else if(questionsComplete==15){
                    cout<<"Muhammad Zain: WWOOOOOOH!!! Congrats you've Won 7 Crore Rupees! Winner"<<endl;
                    
                }
            }
            else if(selectAns == "l"){
                cout<<"1)50-50"<<endl<<"2)Phone A Friend"<<endl<<"3)Audience Vote"<<endl;
                cout<<"Select: ";
                cin>>lifeLine;
                switch (lifeLine)
                {
                case 2:
                    if(phoneAFriend!=0){
                        phoneAFriend = phoneAFriend - 1;
                        cout<<"Muhammad Zain: You can call your friend "<<userName<<"."<<endl;
                        cout<<"                                                                   press l for lifeline"<<endl;
                        cout<<endl;
                        cout<<"                                                                   50-50: "<<fiftyFifty<<endl;
                        cout<<"                                                                   Phone A Friend: "<<phoneAFriend<<endl;
                        cout<<"                                                                   Audience Vote: "<<audienceVote<<endl;
                        cout<<questions[i]<<endl;
                        cout<<"A) "<<choicesA[i]<<"            B) "<<choicesB[i]<<endl;
                        cout<<"C) "<<choicesC[i]<<"            D) "<<choicesD[i]<<endl;
                        cout<<"Select: ";
                        cin>>selectAns;
                        if(selectAns == answersOfQuestions[i]){
                            questionsComplete = questionsComplete + 1;
                            cout<<"Muhammad Zain: Sahi jawab "<<userName<<endl;
                            cout<<"Muhammad Zain: Next Question is on your screen! "<<endl;
                            if(questionsComplete==1){
                                cout<<"Muhammad Zain: Congrats You Have Won 5000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==2){
                                cout<<"Muhammad Zain: Congrats You Have Won 10,000 Rupees"<<endl;

                            }
                            else if(questionsComplete==3){
                                cout<<"Muhammad Zain: Congrats You Have Won 20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==4){
                                cout<<"Muhammad Zain: Congrats You Have Won 40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==5){
                                cout<<"Muhammad Zain: Congrats You Have Won 80,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==6){
                                cout<<"Muhammad Zain: Congrats You Have Won 1,60,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==7){
                                cout<<"Muhammad Zain: Congrats You Have Won 3,20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==8){
                                cout<<"Muhammad Zain: Congrats You Have Won 6,40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==9){
                                cout<<"Muhammad Zain: Congrats You Have Won 12,50,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==10){
                                cout<<"Muhammad Zain: Congrats You Have Won 25,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==11){
                                cout<<"Muhammad Zain: Congrats You Have Won 50,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==12){
                                cout<<"Muhammad Zain: Congrats You Have Won 1 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==13){
                                cout<<"Muhammad Zain: Congrats You Have Won 3 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==14){
                                cout<<"Muhammad Zain: Congrats You Have Won 5 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==15){
                                cout<<"Muhammad Zain: WWOOOOOOH!!! Congrats you've Won 7 Crore Rupees! Winner"<<endl;
                                
                            }
                            continue;
                        }
                        else{
                            cout<<"Muhammad Zain: __Game-Over__"<<endl;
                            break;
                        }
                    }
                    else{
                        cout<<"Muhammad Zain: Sorry "<<userName<<" You can't phone a friend with 0 available points."<<endl;
                        cout<<"                                                                   press l for lifeline"<<endl;
                        cout<<endl;
                        cout<<"                                                                   50-50: "<<fiftyFifty<<endl;
                        cout<<"                                                                   Phone A Friend: "<<phoneAFriend<<endl;
                        cout<<"                                                                   Audience Vote: "<<audienceVote<<endl;
                        cout<<questions[i]<<endl;
                        cout<<"A) "<<choicesA[i]<<"            B) "<<choicesB[i]<<endl;
                        cout<<"C) "<<choicesC[i]<<"            D) "<<choicesD[i]<<endl;
                        cout<<"Select: ";
                        cin>>selectAns;
                        if(selectAns == answersOfQuestions[i]){
                            questionsComplete = questionsComplete + 1;
                            cout<<"Muhammad Zain: Sahi jawab "<<userName<<endl;
                            cout<<"Muhammad Zain: Next Question is on your screen! "<<endl;
                            if(questionsComplete==1){
                                cout<<"Muhammad Zain: Congrats You Have Won 5000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==2){
                                cout<<"Muhammad Zain: Congrats You Have Won 10,000 Rupees"<<endl;

                            }
                            else if(questionsComplete==3){
                                cout<<"Muhammad Zain: Congrats You Have Won 20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==4){
                                cout<<"Muhammad Zain: Congrats You Have Won 40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==5){
                                cout<<"Muhammad Zain: Congrats You Have Won 80,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==6){
                                cout<<"Muhammad Zain: Congrats You Have Won 1,60,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==7){
                                cout<<"Muhammad Zain: Congrats You Have Won 3,20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==8){
                                cout<<"Muhammad Zain: Congrats You Have Won 6,40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==9){
                                cout<<"Muhammad Zain: Congrats You Have Won 12,50,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==10){
                                cout<<"Muhammad Zain: Congrats You Have Won 25,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==11){
                                cout<<"Muhammad Zain: Congrats You Have Won 50,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==12){
                                cout<<"Muhammad Zain: Congrats You Have Won 1 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==13){
                                cout<<"Muhammad Zain: Congrats You Have Won 3 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==14){
                                cout<<"Muhammad Zain: Congrats You Have Won 5 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==15){
                                cout<<"Muhammad Zain: WWOOOOOOH!!! Congrats you've Won 7 Crore Rupees! Winner"<<endl;
                                
                            }
                            continue;

                        }
                        else{
                            cout<<"Muhammad Zain: __Game-Over__"<<endl;
                            break;
                        }
                    }
                
                case 3:
                    if(audienceVote!=0){
                        audienceVote = audienceVote - 1;
                        cout<<"Muhammad Zain: Audience Start Your Vots Now!"<<endl;
                        if(answersOfQuestions[i]=="a"){
                            cout<<"a ----> 50%"<<endl;
                            cout<<"b ----> 25%"<<endl;
                            cout<<"c ----> 5%"<<endl;
                            cout<<"d ----> 15%"<<endl;
                        }
                        else if(answersOfQuestions[i]=="b"){
                            cout<<"a ----> 25%"<<endl;
                            cout<<"b ----> 50%"<<endl;
                            cout<<"c ----> 5%"<<endl;
                            cout<<"d ----> 15%"<<endl;
                        }
                        else if(answersOfQuestions[i]=="c"){
                            cout<<"a ----> 25%"<<endl;
                            cout<<"b ----> 10%"<<endl;
                            cout<<"c ----> 50%"<<endl;
                            cout<<"d ----> 15%"<<endl;
                        }
                        else if(answersOfQuestions[i]=="d"){
                            cout<<"a ----> 25%"<<endl;
                            cout<<"b ----> 15%"<<endl;
                            cout<<"c ----> 10%"<<endl;
                            cout<<"d ----> 60%"<<endl;
                        }
                        cout<<"                                                                   press l for lifeline"<<endl;
                        cout<<endl;
                        cout<<"                                                                   50-50: "<<fiftyFifty<<endl;
                        cout<<"                                                                   Phone A Friend: "<<phoneAFriend<<endl;
                        cout<<"                                                                   Audience Vote: "<<audienceVote<<endl;
                        cout<<questions[i]<<endl;
                        cout<<"A) "<<choicesA[i]<<"            B) "<<choicesB[i]<<endl;
                        cout<<"C) "<<choicesC[i]<<"            D) "<<choicesD[i]<<endl;
                        cout<<"Select: ";
                        cin>>selectAns;
                        if(selectAns == answersOfQuestions[i]){
                            questionsComplete = questionsComplete + 1;
                            cout<<"Muhammad Zain: Sahi jawab "<<userName<<endl;
                            cout<<"Muhammad Zain: Next Question is on your screen! "<<endl;
                            if(questionsComplete==1){
                                cout<<"Muhammad Zain: Congrats You Have Won 5000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==2){
                                cout<<"Muhammad Zain: Congrats You Have Won 10,000 Rupees"<<endl;

                            }
                            else if(questionsComplete==3){
                                cout<<"Muhammad Zain: Congrats You Have Won 20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==4){
                                cout<<"Muhammad Zain: Congrats You Have Won 40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==5){
                                cout<<"Muhammad Zain: Congrats You Have Won 80,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==6){
                                cout<<"Muhammad Zain: Congrats You Have Won 1,60,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==7){
                                cout<<"Muhammad Zain: Congrats You Have Won 3,20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==8){
                                cout<<"Muhammad Zain: Congrats You Have Won 6,40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==9){
                                cout<<"Muhammad Zain: Congrats You Have Won 12,50,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==10){
                                cout<<"Muhammad Zain: Congrats You Have Won 25,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==11){
                                cout<<"Muhammad Zain: Congrats You Have Won 50,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==12){
                                cout<<"Muhammad Zain: Congrats You Have Won 1 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==13){
                                cout<<"Muhammad Zain: Congrats You Have Won 3 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==14){
                                cout<<"Muhammad Zain: Congrats You Have Won 5 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==15){
                                cout<<"Muhammad Zain: WWOOOOOOH!!! Congrats you've Won 7 Crore Rupees! Winner"<<endl;
                                
                            }
                            continue;

                        }
                        else{
                            cout<<"Muhammad Zain: __Game-Over__"<<endl;
                            break;
                        }


                    }
                    else{
                        cout<<"Muhammad Zain: Audience Can't Vote with 0 available points "<<userName<<"."<<endl;
                        cout<<"                                                                   press l for lifeline"<<endl;
                        cout<<endl;
                        cout<<"                                                                   50-50: "<<fiftyFifty<<endl;
                        cout<<"                                                                   Phone A Friend: "<<phoneAFriend<<endl;
                        cout<<"                                                                   Audience Vote: "<<audienceVote<<endl;
                        cout<<questions[i]<<endl;
                        cout<<"A) "<<choicesA[i]<<"            B) "<<choicesB[i]<<endl;
                        cout<<"C) "<<choicesC[i]<<"            D) "<<choicesD[i]<<endl;
                        cout<<"Select: ";
                        cin>>selectAns;
                        if(selectAns == answersOfQuestions[i]){
                            questionsComplete = questionsComplete + 1;
                            cout<<"Muhammad Zain: Sahi jawab "<<userName<<endl;
                            cout<<"Muhammad Zain: Next Question is on your screen! "<<endl;
                            if(questionsComplete==1){
                                cout<<"Muhammad Zain: Congrats You Have Won 5000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==2){
                                cout<<"Muhammad Zain: Congrats You Have Won 10,000 Rupees"<<endl;

                            }
                            else if(questionsComplete==3){
                                cout<<"Muhammad Zain: Congrats You Have Won 20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==4){
                                cout<<"Muhammad Zain: Congrats You Have Won 40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==5){
                                cout<<"Muhammad Zain: Congrats You Have Won 80,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==6){
                                cout<<"Muhammad Zain: Congrats You Have Won 1,60,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==7){
                                cout<<"Muhammad Zain: Congrats You Have Won 3,20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==8){
                                cout<<"Muhammad Zain: Congrats You Have Won 6,40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==9){
                                cout<<"Muhammad Zain: Congrats You Have Won 12,50,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==10){
                                cout<<"Muhammad Zain: Congrats You Have Won 25,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==11){
                                cout<<"Muhammad Zain: Congrats You Have Won 50,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==12){
                                cout<<"Muhammad Zain: Congrats You Have Won 1 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==13){
                                cout<<"Muhammad Zain: Congrats You Have Won 3 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==14){
                                cout<<"Muhammad Zain: Congrats You Have Won 5 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==15){
                                cout<<"Muhammad Zain: WWOOOOOOH!!! Congrats you've Won 7 Crore Rupees! Winner"<<endl;
                                
                            }
                            continue;

                        }
                        else{
                            cout<<"Muhammad Zain: __Game-Over__"<<endl;
                            break;
                        }
                    }

                case 1:
                    if(fiftyFifty!=0){
                        fiftyFifty = fiftyFifty - 1;
                        cout<<"                                                                   press l for lifeline"<<endl;
                        cout<<endl;
                        cout<<"                                                                   50-50: "<<fiftyFifty<<endl;
                        cout<<"                                                                   Phone A Friend: "<<phoneAFriend<<endl;
                        cout<<"                                                                   Audience Vote: "<<audienceVote<<endl;
                        cout<<questions[i]<<endl;
                        if(answersOfQuestions[i]=="a"){
                            cout<<"| A) "<<choicesA[i]<<" |"<<"            B) "<<choicesB[i]<<endl;
                            cout<<"  C) "<<choicesC[i]<<"                | D) "<<choicesD[i]<<" |"<<endl;
                        }
                        else if(answersOfQuestions[i]=="b"){
                            cout<<"   A) "<<choicesA[i]<<"                 | B) "<<choicesB[i]<<" |"<<endl;
                            cout<<" | C) "<<choicesC[i]<<" |"<<"             D) "<<choicesD[i]<<endl;
                        }
                        else if(answersOfQuestions[i]=="c"){
                            cout<<"| A) "<<choicesA[i]<<" |"<<"            B) "<<choicesB[i]<<endl;
                            cout<<"| C) "<<choicesC[i]<<" |"<<"            D) "<<choicesD[i]<<endl;
                        }
                        else if(answersOfQuestions[i]=="d"){
                            cout<<"A) "<<choicesA[i]<<"           | B) "<<choicesB[i]<<" |"<<endl;
                            cout<<"C) "<<choicesC[i]<<"           | D) "<<choicesD[i]<<" |"<<endl;
                        }
                        cout<<"Select: ";
                        cin>>selectAns;
                        if(selectAns == answersOfQuestions[i]){
                            questionsComplete = questionsComplete + 1;
                            cout<<"Muhammad Zain: Sahi jawab "<<userName<<endl;
                            cout<<"Muhammad Zain: Next Question is on your screen! "<<endl;
                            if(questionsComplete==1){
                                cout<<"Muhammad Zain: Congrats You Have Won 5000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==2){
                                cout<<"Muhammad Zain: Congrats You Have Won 10,000 Rupees"<<endl;

                            }
                            else if(questionsComplete==3){
                                cout<<"Muhammad Zain: Congrats You Have Won 20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==4){
                                cout<<"Muhammad Zain: Congrats You Have Won 40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==5){
                                cout<<"Muhammad Zain: Congrats You Have Won 80,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==6){
                                cout<<"Muhammad Zain: Congrats You Have Won 1,60,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==7){
                                cout<<"Muhammad Zain: Congrats You Have Won 3,20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==8){
                                cout<<"Muhammad Zain: Congrats You Have Won 6,40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==9){
                                cout<<"Muhammad Zain: Congrats You Have Won 12,50,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==10){
                                cout<<"Muhammad Zain: Congrats You Have Won 25,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==11){
                                cout<<"Muhammad Zain: Congrats You Have Won 50,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==12){
                                cout<<"Muhammad Zain: Congrats You Have Won 1 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==13){
                                cout<<"Muhammad Zain: Congrats You Have Won 3 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==14){
                                cout<<"Muhammad Zain: Congrats You Have Won 5 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==15){
                                cout<<"Muhammad Zain: WWOOOOOOH!!! Congrats you've Won 7 Crore Rupees! Winner"<<endl;
                                
                            }
                            continue;

                        }
                        else{
                            cout<<"Muhammad Zain: __Game-Over__"<<endl;
                            break;
                        }
                    }
                    else{
                        cout<<"Muhammad Zain: Sorry "<<userName<<", You can't take more fifty fifty with 0 available points."<<endl;
                        cout<<"                                                                   press l for lifeline"<<endl;
                        cout<<endl;
                        cout<<"                                                                   50-50: "<<fiftyFifty<<endl;
                        cout<<"                                                                   Phone A Friend: "<<phoneAFriend<<endl;
                        cout<<"                                                                   Audience Vote: "<<audienceVote<<endl;
                        cout<<questions[i]<<endl;
                        cout<<"A) "<<choicesA[i]<<"            B) "<<choicesB[i]<<endl;
                        cout<<"C) "<<choicesC[i]<<"            D) "<<choicesD[i]<<endl;
                        cout<<"Select: ";
                        cin>>selectAns;
                        if(selectAns == answersOfQuestions[i]){
                            questionsComplete = questionsComplete + 1;
                            cout<<"Muhammad Zain: Sahi jawab "<<userName<<endl;
                            cout<<"Muhammad Zain: Next Question is on your screen! "<<endl;
                            if(questionsComplete==1){
                                cout<<"Muhammad Zain: Congrats You Have Won 5000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==2){
                                cout<<"Muhammad Zain: Congrats You Have Won 10,000 Rupees"<<endl;

                            }
                            else if(questionsComplete==3){
                                cout<<"Muhammad Zain: Congrats You Have Won 20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==4){
                                cout<<"Muhammad Zain: Congrats You Have Won 40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==5){
                                cout<<"Muhammad Zain: Congrats You Have Won 80,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==6){
                                cout<<"Muhammad Zain: Congrats You Have Won 1,60,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==7){
                                cout<<"Muhammad Zain: Congrats You Have Won 3,20,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==8){
                                cout<<"Muhammad Zain: Congrats You Have Won 6,40,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==9){
                                cout<<"Muhammad Zain: Congrats You Have Won 12,50,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==10){
                                cout<<"Muhammad Zain: Congrats You Have Won 25,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==11){
                                cout<<"Muhammad Zain: Congrats You Have Won 50,00,000 Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==12){
                                cout<<"Muhammad Zain: Congrats You Have Won 1 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==13){
                                cout<<"Muhammad Zain: Congrats You Have Won 3 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==14){
                                cout<<"Muhammad Zain: Congrats You Have Won 5 Crore Rupees"<<endl;
                                
                            }
                            else if(questionsComplete==15){
                                cout<<"Muhammad Zain: WWOOOOOOH!!! Congrats you've Won 7 Crore Rupees! Winner"<<endl;
                                
                                
                            }
                            continue;

                        }
                        else{
                            cout<<"Game Over"<<endl;
                            break;
                        }
                    }
                // End Of Switch
                default:
                    break;
                }
            }
            else{
                cout<<"Muhammad Zain: __Game-Over__";
                break;
            }
        }
        
    }
    

    return 0;
}