#include <iostream>
#include <stdlib.h>
#include<conio.h>
int main();
using namespace std;

void fortunes();
void delay(int);
int zodmenuu();		       	
void aries(int,int);
void taurus(int,int);
void gemini(int,int);
void cancer(int,int);
void leo(int,int);
void virgo(int,int);
void libra(int,int);
void scorpio(int,int);
void saggitarius(int,int);
void capricorn(int,int);
void aquarius(int,int);
void pisces(int,int);
       	   	   

void delay(int x)
    {
        int i=0,j;
        for(;i<=x;i++)
           for(j=0;j<=105500000;j++);
        return ;
    }
				  
				      
int zodmenuu()
{
	int c;
	cout<<endl<<" 1. ABOUT YOUSELF \n 2. TODAY'S FORTUNE \n 3. LUCKY NUMBER  \n 4. FOR EXIT \n";
	cout<<endl<<"\n ENTER YOUR CHOICE:  ";
	cin>>c;
	 
	 return c;
}

void fortunes()
    {
    	
        string fort[]={"YOUR TALENTS WIL BE RECOGNIZED AND SUITABLY REWARDED.",
                      "YOU ARE GOING TO HAVE SOME NEW CLOTHES.",
                      "DO NOT MISTAKE TEMPTATION FOR OPPORTUNITY.",
                      "THE WORLD MAY BE YOUR OYSTER, BUT IT DOESN'T MEAN YOU'LL GET ITS PEARL.",
                      "FLATTERY WILL GO FAR TONIGHT.",
                      "THE GREATEST DANGER COULD BE YOUR STUPIDITY.",
                      "A SECRET ADMIRER WILL SOON SEND YOU A SIGN OF AFFECTION.",
                      "WE CANNOT DO GREAT THINGS; ONLY SMALL THINGS WITH GREAT LOVE. -- MOTHER TERESA.",
                      "YOU WERE BORN WITH THE SKILL TO COMMUNICATE WITH PEOPLE EASILY.",
                      "NONE OF THE SECRETS OF SUCCESS WILL WORK UNLESS YOU DO.",
                      "YOU ARE VERY EXPRESSIVE AND POSITIVE IN WORDS, ACT AND FEELING.",
                      "TRUST YOUR INTUITION. THE UNIVERSE IS GUIDING YOUR LIFE.",
                      "IF YOU WANT THE RAINBOW, YOU MUST TO PUT UP WITH THE RAIN. -- D. PARTON",
                      "A BUG IN THE HAND IS BETTER THAN ONE AS YET UNDETECTED.",
                      "A COMPLEX SYSTEM THAT WORKS IS INVARIABLY FOUND TO HAVE EVOLVED FROM A SIMPLE SYSTEM THAT WORKS.",
                      "A BLACK CAT CROSSING YOUR PATH SIGNIFIES THAT THE ANIMAL IS GOING SOMEWHERE.",
                      "AND NOW THE TIME FOR SOMETHING COMPLETELY DIFFERENT."
                      "THE HARD TIMES WILL BEGIN TO FADE, JOY WILL TAKE THEIR PLACE.",
                      "LIES TODAY.",
                      "SMALL ONES CAN BE JUST AS EFFECTIVE.",
                      "DON'T YOU WISH YOU HAD MORE ENERGY... OR LESS AMBITION?",
                      "FINE DAY FOR FRIENDS.",
                      "O-SO DAY FOR YOU.",
                      "IT IS SO VERY HARD TO BE AN ON-YOUR-OWN-TAKE-CARE-OF-YOURSELF-BECAUSE-THERE-IS-NO-ONE-ELSE-TO-DO-IT-FOR-YOU GROWNUP.",
                      "ITS A VERY *__UN*LUCKY WEEK IN WHICH TO BE TOOK DEAD.",
                      "IT'S ALL IN YOUR HEAD.",
                      "GET A LIFE!",
                      "MANY CHANGES OF MIND AND MOOD; DO NOT HESITATE TOO LONG.",
                      "STAY AWAY FROM CARS TODAY.",
                      "ALL YOUR HARD WORK WILL SOON PAY OFF.",
                      "YOU'LL DIE IN A LOTTLE MORE THAN A MONTH.",
                      "A GOOD TIME TO FINISH UP OLD TASKS.",
                      "YOU DONT REALLY BELIEVE IN FORTUNES.",
                      "STAY AWAKE TILL LATE TODAY.",
                      "YOU'LL BE SURPRISED.",
                      "LET YOUR FOOT LOOSE TODAY!",
                      "YOUR CRUSH WILL MEET TO YOU TODAY.",
                      "YOU NEED SOME FUN IN LIFE.",
                      "WHAT HAPPENED LAST NIGHT CAN HAPPEN AGAIN.",
                      "A FRIEND ASKS ONLY FOR YOUR TIME, NOT YOUR MONEY.",
                      "NEVER TROUBLE TROUBLE UNTIL TROUBLE TROUBLES YOU.",
                      "MISUNDERSTANDING WILL BREAK YOUR FRIENDSHIP SOON.",
                      "YOU HAVE TAKEN YOURSELF TOO SERIOUSLY.",
                      "YOU'RE STUPID.",
                      "YOU HAVE THE CAPACITY TO LEARN FROM MISTAKES.",
                      "YOU'LL LEARN A LOT TODAY."
                      "YOU HAVE UNUSUAL EQUIPMENT FOR SUCCESS, USE IT PROPERLY.",
                      "YOU WILL RECEIVE A FORTUNE COOKIE.",
                      "SOMEONE WILL INVITE YOU TO A KARAOKE PARTY.",
                      "HELP! IM STUCK INSIDE THE FORTUNE TELLER!",
                      "THERE IS NO MISTAKE SO GREAT AS THAT OF BEING ALWAYS RIGHT.",
                      "SOMEONE THINKS YOU ARE WONDERFULLY MYSTERIOUS",
                      "A TUB AND A RUB WILL CHANGE YOUR DAY.",
                      "EAT YOUR VEGETABLE AND YOU WILL BE STRONG LIKE POPEYE.",
                      "A CLOSED MOUTH GATHERS NO FEET.",
                      "YOU WILL MAKE A GREAT LAWYER.",
                      "IF YOU THINK YOU�RE TOO SMALL TO BE EFFECTIVE, YOU�VE NEVER BEEN IN BED WITH A MOSQUITO.",
                      "A ROLLING STONE GATHERS NO MOSS.",
                      "YOU CAN ALWAYS FIND HAPPINESS AT WORK ON FRIDAY.",
                      "A FANATIC IS ONE WHO CAN'T CHANGE HIS MIND, AND WON'T CHANGE THE SUBJECT.",
                      "HE WHO LAUGHS AT HIMSELF NEVER RUNS OUT OF THINGS TO LAUGH AT.",
                      "FLATTERY WILL GO FAR TONIGHT.",
                      "HE WHO FARTS IN CHURCH, SITS IN HIS OWN PEW!",
                      "YOU WILL RECEIVE A FORTUNE.",
                      "SING AND REJOICE, FORTUNE IS SMILING ON YOU.",
                      "YOU HAVE THE RARE ABILITY TO RECOGNIZE ABILITY IN OTHERS.",
                      "LIFE TO YOU IS A DASHING AND BOLD ADVENTURE.",
                      "THE TIME IS RIGHT TO MAKE NEW FRIENDS.",
                      "YOU WILL MAKE A SUDDEN RISE IN LIFE.",
                      "SOMEONE FROM YOUR PAST HAS RETURNED TO STEAL YOUR HEART.",
                      "YOU DISPLAY THE WONDERFUL TRAITS OF CHARM AND COURTESY.",
                      "HAPPINESS ALWAYS ACCOMPANIES WITH YOU.",
                      "YOUR HEART IS PURE, AND YOUR MIND CLEAR, AND SOUL DEVOUT.",
                      "WHEN WINTER COMES HEAVEN WILL RAIN SUCCESS ON YOU.",
                      "YOU WILL HAVE A FINE CAPACITY FOR THE ENJOYMENT OF LIFE.",
                      "YOU WILL ENJOY GOOD HEALTH.",
                      "ACCEPT THE NEXT PROPOSITION YOU HEAR.",
                      "YOU SHOULD BE ABLE TO UNDERTAKE AND COMPLETE ANYTHING.",
                      "IN GOD (SIC) WE TRUST; ALL OTHERS MUST PAY CASH.",
                      "THESE THREE GO TOGETHER:\nYOU WILL BE CALLED UPON TO HELP A FRIEND IN TROUBLE.\nDON'T LET FRIENDS IMPOSE ON YOU, WORK CALMLY AND SILENTLY.\nYOUR ROAD WILL BE MADE SMOOTH FOR YOU BY GOOD FRIENDS.",
                      "YOU WILL ALWAYS BE SUCCESSFUL IN YOUR PROFESSIONAL CAREER.",
                      "THERE IS NO WISDOM GREATER THAN KINDNESS.",
                      "YOU LEAD A USEFUL LIFE NO MATTER WHAT RICHES ARE COMING TO YOU.",
                      "YOUR MIND IS CREATIVE, ORIGINAL AND ALERT.",
                      "YOU COULD PROSPER IN THE FIELD OF MEDICAL RESEARCH.",
                      "YOU ARE A HAPPY MAN.",
                      "YOUR PRESENT PLANS ARE GOING TO SUCCEED.",
                      "A PLEASANT SURPRISE IS WAITING FOR YOU.",
                      "THESE TWO GO TOGETHER:\nYOU HAVE MUCH SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.\nYOU HAVE GREAT SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.",
                      "YOUR HOME IS A PLEASANT PLACE FROM WHICH YOU DRAW HAPPINESS.",
                      "A VISIT TO A MUSEUM WILL BRING YOU A NEW SENSE OF APPRECIATION.",
                      "YOUR GOOD DEEDS ARE NEVER FORGOTTEN.",
                      "IT'S TIME YOU ASKED THAT SPECIAL SOMEONE OUT ON A DATE.",
                      "THE WORLD IS ALWAYS READY TO RECIEVE TALENT WITH OPEN ARMS.",
                      "WISH YOU A LONG LIFE.",
                      "YOU WILL HAVE A LONG AND HEALTHY LIFE.",
                      "HAPPINESS IS FOUND WHEN ONE IS NOT LOOKING.",
                      "SOMEONE HAS COMPLEMENTED YOU TODAY IN YOUR ABSENCE.",
                      "YOU WILL BECOME BETTER ACQUAINTED WITH A COWORKER."
};
        
        cout<<"\n ------------------------------------------------------------------";
        cout<<"\n ------------------------------------------------------------------";
        cout<<"\n  YOUR FORTUNE FOR TODAY: \n ";
        cout<<fort[rand()%100] <<endl;
        cout<<"\n ------------------------------------------------------------------";
        cout<<"\n ------------------------------------------------------------------";
       
	    delay(2);
        cout<<endl<<" \n Enter any key to continue...";
        getch();
    }
   	

       	
void aries(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS ARIES - THE RAM   "<<endl;
       
        string ari[9]={"\n*  You have unusually strong willpower and great obstinancy of purpose",
                    "\n*  You are born to be fighter in every sense of the world",
                    "\n*  You also have the greatest ability as organizer on a large scale. You find yourself as the organizers of big schemes or as the heads of big businesses, and also in the organization and development of countries.",
                    "\n*  You seem naturally to resent all criticism, and the only way to offset this in you is by quiet logic, reason, and proof.",
                    "\n*  You are unhappy in your domestic life. It is very difficult for such people to meet a member of the opposite sex who would understand you, and if opposition does not upset you from this point it usually does through your children.",
                    "\n*  You deeply, fervently and strongly desire for affection and sympathy, more than anything else, and this is generally the rock on which you are finally wrecked if you have not the good fortune to meet your right affinities.",
                    "\n*  As far as material success or power is concerned, there are no heights to which persons born in this sign wouldn�t be able to. Success, however, is not making you feel really happy and satisfied.",
                    "\n*  You are inclined to lack caution, being by nature impulsive and quick in thought and action.",
                    "\n*  You are enormously ambitious, as a rule you succeed in life and gain money and position."

                    };
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>10) break;
                                        
                                    cout<<ari[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                aries(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    aries(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*2<<endl;
                                 delay(2);
                                 cout<<x+7 <<endl;
                                 delay(2);
                                 cout<<x*21/19<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 aries(x,y);

                    break;
             case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }
    
void taurus(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
        cout<<"\n YOUR HOROSCOPE SIGN IS TAURUS- THE BULL "<<endl;
        
        string about[10]={"\n*  You tend to be very patient, practical and dedicated.",
                     "\n*  You are usually very cautious when dealing with people, life and money.",
                     "\n*  You have a curious power of dominating others, even when not conscious of trying to do so.",
                     "\n*  You are extremely faithful, with a strong need for security and a settled routine.",
                     "\n*  You are very earthy. You can also be highly romantic and sensitive when it comes to love.",
                     "\n*  You have great power of endurance, both physical and mental, and can pass through enormous strains of fatigue as long as the excitement or determination lasts.",
                     "\n*  You make wonderful hosts and hostesses.",
                     "\n*  You have great taste about food.",
                     "\n*  In the management of your houses you can make much out of little.",
                     "\n*  You always fight in the open, for you hate trickiness, double-dealing, or deceit.",
                     
                    };
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                               	    if( i*d > 11) break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                taurus(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    taurus(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x+9<<endl;
                                 delay(2);
                                 cout<<x*8/2<<endl;
                                 delay(2);
                                 cout<<x-(x%9)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 taurus(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }
    
void gemini(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS GEMINI - THE TWINS  "<<endl;
       
        string about[12]={"\n*  You are widely known for your dual personalities and ability to change mood from moment to moment.",
                     "\n*  Although you hate to be tied down, you make lively, entertaining and romantic partners, even if you can be rather fickle if bored or unhappy.",
                     "\n*  The twin sides of your nature are perpetually pulling in opposite directions.",
                     "\n*  Your brains are subtle and brilliant but you usually \"lack continuity of purpose\".",
                     "\n*  Of all people you are the most difficult to understand, in temperament you are hot and cold almost at the same moment.",
                     "\n*  Once you are attracted to people, you have to ensure that you are not dull or mundane.",
                     "\n*  You will no doubt spend ages chatting to anyone about every subject under the sun, just to keep feeding your ever active and inquisitive mind.",
                     "\n*  If taken as you are, in your own moods, you are the most delightful people imaginable.",
                     "\n*  You believe you are truthful, constant, faithful, and so you may be at the moment, but every moment to you has a separate existence.",
                     "\n*  You have an ability to see quickly the weak points in those you meet, and can reduce all to nothing by wit, sarcasm, or mimicry.",
                     "\n*  You are great talker and usually very much in demand socially because you are so entertaining.",
                     "\n*  Gemini is the life of the party."
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                gemini(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    gemini(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x<<endl;
                                 delay(2);
                                 cout<<x*25/18<<endl;
                                 delay(2);
                                 cout<<x+(x/17)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 gemini(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }

    
void cancer(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS CANCER - THE CRAB   "<<endl;
       
        string about[12]={"\n*  You are easily hurt by the slights of others.",
                  "\n*  You are very complex, sometimes appearing extremely strong and at other times to be as vulnerable as a child.",
                  "\n*  You are remarkably good at accumulating things; indeed, you can be unwilling to throw anything out, even relationships that have passed your use-by date.",
                  "\n*  You are generally over-anxious in financial matters, and make great efforts to gather in money.",
                  "\n*  You have unusual ups and downs in your early life and so you are compelled to work to keep ahead, but once you get on your feet you keep there.",
                  "\n*  If channeled in the right direction, your enormous sensitivity can become a great source of strength.",
                  "\n*  Once you overcome your touchiness and master your turbulent emotions, your intellect and imagination enable you to become a success in almost anything you undertake.",
                  "\n*  Your intuitions are reliable and should be trusted.",
                  "\n*  You are generally gifted with strong imaginations.",
                  "\n*  You are seldom surrounded by happiness at home matters, no matter how successful you may appear in the eye of the world.",
                  "\n*  You have deep love for what you call \"\n*  Your own people,\" for family customs and for tradition.",
                  "\n*  You are very timid and are afraid of refusal more, than all other marks even summarized together.",
                  
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                cancer(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    cancer(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x+8<<endl;
                                 delay(2);
                                 cout<<x*(x%10)<<endl;
                                 delay(2);
                                 cout<<x*(x/3)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 cancer(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }

    
void leo(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS LEO - THE LION  "<<endl;
       
        string about[12]={"\n*  You always aim to get above the common herd of humanity.",
                    "\n*  You are naturally attracted to strong personalities.",
                    "\n*  You will forgive any fault in the people you like so long as you have individuality and purpose.",
                    "\n*  You are usually generous, kind, and openhearted.",
                    "\n*  You forgive easily and never hold a grudge.",
                    "\n*  You are very much attuned to the life giving properties of our Sun itself.",
                    "\n*  You are typically flamboyant and generous with tremendous charm and a magnanimous spirit.",
                    "\n*  You are overflowing with sympathy, and are generally generous to a fault.",
                    "\n*  You feel isolated and lonely in life, and if not actively employed in some work or purpose you become melancholy and despondent.",
                    "\n*  You are natural leader and chief.",
                    "\n*  You don�t easily become friends with other horoscopes",
                    "\n*  You are inclined to suffer from headache, trouble with the eyes and other things concerned the head."
                    
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                leo(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    leo(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*12/8<<endl;
                                 delay(2);
                                 cout<<x*(x%5)<<endl;
                                 delay(2);
                                 cout<<x+(x-2)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 leo(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }


    
void virgo(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS VIRGO - THE VIRGIN  "<<endl;
       
        string about[12]={"\nThe emblem of Virgo, a virgin holding sheaves of wheat in her hands symbolizes wisdom, garnered in the fields of experience.",
                    "\n*  You are shy and idealistic.",
                    "\n*  You are quick thinking and observant.",
                    "\n*  You define pure modesty.",
                    "\n*  You can't bear to be taken care of, you prefer to take care of others.",
                    "\n*  You are/will be successful in life.",
                    "\n*  You have keen, good intellects, are very discriminating about those with whom you associate.",
                    "\n*  In all business matters you have good judgment, and are not easily imposed upon or deceived.",
                    "\n*  You are usually materialistic in your views of life.",
                    "\n*  You analyze and reason everything from your own way of thinking outwards.",
                    "\n*  You attracted to only that knowledge that can be applied usefully.",
                    "\n*  You will happily share information with anyone, if it confirms your own usefulness in the world."
                    
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                virgo(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    virgo(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*39/15<<endl;
                                 delay(2);
                                 cout<<x%5<<endl;
                                 delay(2);
                                 cout<<x-(x/102)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 virgo(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }


void libra(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS LIBRA - THE BALANCE  "<<endl;
       
        string about[12]={"\n*  You are rarely lazy.",
                     "\n*  You work hard, and also demand that your partners work just as hard.",
                     "\n*  You have a strong sense of justice and fair play.",
                     "\n*  It is pretty unusual for you to express anger, but when you do it is usually a storm.",
                     "\n*  You are extremely positive and decisive in all your thoughts and actions.",
                     "\n*  You have great foresight and intuition.",
                     "\n*  You are generally seen at your best when acting on first impressions.",
                     "\n*  You are usually in control of fear and look calm, collected, and in charge of the situation.",
                     "\n*  You are good natured and loving, you enjoy talking to people.",
                     "\n*  You can be very attentive listener.",
                     "\n*  You are often very psychic and would make very devout spiritualists, theosophists, and occultists. ",
                     "\n*  You have the desire to reason out everything that your love of exact proof usually overwhelms your psychic powers."
                     
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                libra(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    libra(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*49/25<<endl;
                                 delay(2);
                                 cout<<x+10<<endl;
                                 delay(2);
                                 cout<<x+(x/12)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 libra(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }


void scorpio(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS SCORPIUS - THE SCORPION    "<<endl;
       
        string about[12]={"\n*  You are usually filled with inherent contradiction.",
                      "\n*  The best and the worst seem to make you your chosen battlefield.",
                      "\n*  From spiritual and intellectual revelations, you want the edge on everybody else.",
                      "\n*  You are usually extremely pore-minded, virtuous, and religious.",
                      "\n*  You have great magnetic power, and as speakers appeal to the emotions and sentiments of your public more than to logic, but you sway your audiences as you choose.",
                      "\n*  In dangerous situations and in sudden crises you remain cool and very determined.",
                      "\n*  You drive yourself hard, and usually drive others unmercifully.",
                      "\n*  You despise weakness in yourself or in others.",
                      "\n*  Your worst fault is that you are too adaptable to the people with whom you come in contact.",
                      "\n*  You readily develop unusual clairvoyant powers.",
                      "\n*  You will often gain fame and distinction as writer, painter or poet.",
                      "\n*  You are natural philosopher, deep student of nature."
                      
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                scorpio(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    scorpio(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*40/75<<endl;
                                 delay(2);
                                 cout<<x+7<<endl;
                                 delay(2);
                                 cout<<x+(x/35)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 scorpio(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }


void saggitarius(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS SAGGITARIUS - The ARCHER   "<<endl;
       
        string about[12]={"\n*  You have an appetite for learning and travel.",
                     "\n*  You prefer to be footloose and fancy free.",
                     "\n*  You should become involved in a relationship you make it as enjoyable and as much fun as possible.",
                     "\n*  You are very gregarious, but will be glad to find the time for that special relationship.",
                     "\n*  You concentrate all your attention on whatever you are doing at the moment, and seem to see no other way but until your effort is made.",
                     "\n*  You are often the great workers; you never seem to tire until you drop with fatigue.",
                     "\n*  You would rather learn on your own, through travel and experience, than endure structured classroom environments and routine work assignments.",
                     "\n*  You are usually successful in business, but never feel yourself confined to any one line.",
                     "\n*  You follow the rule if you have been successful in some one thing there is no reason whatever that you must follow it through life.",
                     "\n*  You have an open minded and intellectual curiosity.",
                     "\n*  You are willing to learn about other people in an effort to understand you, while being trusting and open.",
                     "\n*  You are high spirited and congenial."
                     
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                saggitarius(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    saggitarius(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*2/42<<endl;
                                 delay(2);
                                 cout<<x+7<<endl;
                                 delay(2);
                                 cout<<x+(20/x)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 saggitarius(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }


void capricorn(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS CAPRICORN - The GOAT   "<<endl;
       
        string about[12]={"\n*  You are usually ambitious.",
                     "\n*  You marked by a purposeful pursuit of your destiny.",
                     "\n*  You have a sense of purpose and a great faith in your own ability.",
                     "\n*  You are usually mentally strong.",
                     "\n*  You generally aren�t understood by other people.",
                     "\n*  You are fits as thinkers, reasoners, and usually successful in business or any form of government work.",
                     "\n*  Your sign is a pushy Cardinal Earth sign ruled by Saturn, the planet of adversity.",
                     "\n*  You are very independent and high-minded in all what you do.",
                     "\n*  You detest being under the restraint of others.",
                     "\n*  You will grind anything that gets in your way down to dust.",
                     "\n*  Time is definitely on your side.",
                     "\n*  You are leader in whatever you are engaged, or else you are inclined to lose your interest in what you do."
                     
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                capricorn(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    capricorn(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*10<<endl;
                                 delay(2);
                                 cout<<x*32/6<<endl;
                                 delay(2);
                                 cout<<x-(x%5)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 capricorn(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }

void aquarius(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS AQUARIUS - The WATER BEARER   "<<endl;
       
        string about[12]={"\n*  You have great desire for material gain.",
                       "\n*  You are tireless worker and are willing to work for what you want.",
                       "\n*  You do not demand more than your fair share.",
                       "\n*  You read character instinctively, and for this reason you \"see through\" people too easily to be really happy.",
                       "\n*  You are not demonstrative in affection, but feel very deeply.",
                       "\n*  You are usually high-strung, and your nerves are generally overwrought.",
                       "\n*  You often lose control and then say or do things that you bitterly regret later.",
                       "\n*  You are generally very active for the public good, and often give all you have to relieve the distress of others.",
                       "\n*  You are interested in science's advanced achievements. For example - computers.",
                       "\n*  You love to use any modern technical achievements.",
                       "\n*  The inner world of people who were born under the sign of The Aquarias is very unstable.",
                       "\n*  You are usually moody."
                       
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                aquarius(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    aquarius(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x*11<<endl;
                                 delay(2);
                                 cout<<x*20/9<<endl;
                                 delay(2);
                                 cout<<x*(x%10)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 aquarius(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }

void pisces(int x,int y)    //about yourself, lucky numbers,fortunes
    {
        int d,i;
        system("cls");
       
        cout<<" \n     YOUR HOROSCOPE SIGN IS PISCES - The FISHES   "<<endl;
       
        string about[12]={"\n*  You are kind and gullible.",
                     "\n*  You cannot hurt anyone directly.",
                     "\n*  You are adventurous, ambitious, impulsive, enthusiastic and full of energy.",
                     "\n*  You are a pioneer both in thought and action.",
                     "\n*  You are very open to new ideas and a lover of freedom.",
                     "\n*  You possess a curiously natural understanding, which you do not obtain from books or study.",
                     "\n*  You easily acquire, or rather absorb, knowledge, especially of the history of countries, travel, research, and like subject.",
                     "\n*  You are usually over-anxious about money matters, and inclined to worry about what your future position in life may be.",
                     "\n*  You have a dislike and dread of being dependent on others more than from any love of money.",
                      "\n*  You are often classed as superstitious, the occult in all its forms appealing to you in one way or another.",
                     "\n*  You love to search out or investigate the unknown, the philosophical, or the mysterious.",
                     "\n*  There�s is no position in life you could not attain."
                     
                    };
                    
        switch (zodmenuu())
            {
                case 1:                                                                 //about
                      system("cls");       
                      cout<<"\n  HERE IS WHAT YOU ARE!!!\n";
                   
                     d=(x>10)?(x%10):x;
                     if(d==0)
                        d+=5;
                              for(i=1;i<4;i++)
                               {
                                    if(d*i>12)
                                        break;
                                    cout<<about[(i*d)-1];
                                    cout<<"\n   to know more press any key .........  "<<endl;
                                    getch();
                                }
                                cout<<"\n WE HOPE THAT IT WAS HELPFUL \n"<<endl;
                                cout<<"\n Enter any key..... \n";
                                getch();
                                pisces(x,y);
                break;
                
				case 2:                                                                  //fortunes
                    system("cls");
                    fortunes();
                    pisces(x,y);
                break;
                
				case 3:                                                             //lucky numbers
                    system("cls");
                    cout<<"------------------------------------------------------------------";
                    cout<<"------------------------------------------------------------------";
                    cout<<"\n  YOUR LUCKY NUMBERS ARE: \n"<<x-2<<endl;
                                 delay(2);
                                 cout<<x*x-9<<endl;
                                 delay(2);
                                 cout<<x*(45/10)<<endl;
                                                 
                    cout<<" \n Enter any key to continue... "<<endl;
                                 getch();
                                 pisces(x,y);
                break;
             
			    case 4:
                    exit(0);
                
				default:
                    printf("    THE SYSTEM WILL RESTART IN FEW SECONDS!!!");
                    delay(6);
                    main();

            }
    }

