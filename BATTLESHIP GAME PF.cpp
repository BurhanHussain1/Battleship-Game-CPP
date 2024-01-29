#include<iostream>
#include<cstdlib>
#include<ctime>   
using namespace std;

void instructions() 
{
    cout << "\t\t\t\t\t" << "HOW TO PLAY" << endl;
	cout << "\t\t\t\t\t" << "-----------" << endl; 
	
	cout<<"\n1.Place your ships on the grids."<<endl;
	cout<<"2.Player 1 has to play 5 ships of different sizes."<<endl;
	cout<<"3.Player 2 has to play 5 ships of different sizes."<<endl;
	cout<<"4.After placing ships player 1 attack on player 2 ships and vise versa."<<endl;
	cout<<"5.The player that destroyes the other player ships first won the game."<<endl;
}

void credit() 
{
    cout << "\t\t\t\t\tGAME IS MADE BY "<< endl;
    cout << "1ST MEMBER = BURHAN HUSSAIN" << endl;
    cout << "ROLL NO : 21F-9313" << endl;
    cout << "2ND MEMBER = MUHAMMAD BILAL" << endl;
    cout << "ROLL NO : 21F-9076" << endl;
}

bool win(char ar[][8])
{
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (ar[i][j] == '*')
				count++;
		}
	}
	
	if (count == 64)
		return 1;

	else
		return 0;
}

bool win_medium(char ar[][12])
{
int count=0;
for(int i=0;i<12;i++)
{
for(int j=0;j<12;j++)
{
	if(ar[i][j]=='*')
	count++;
}
}

  if(count==144)
  return 1;
  else 
  return 0;
	
}

bool win_hard(char ar[][15])
{
int count=0;
for(int i=0;i<15;i++)
{
for(int j=0;j<15;j++)
{
	if(ar[i][j]=='*')
	count++;
}
}

  if(count==225)
  return 1;
  else 
  return 0;
	
}


void easymode()
{
	int x,num,row,col,count=0,w=0;
	int size_c=8,size_b=5,size_cr=4,size_s=3,size_d=2;
	const int m=8;
	const int n=8;
	char a[m][n];
	char a1[m][n];
	char z;
	cout << "\t\t\t\t\t" << "You are playing easy mode" << endl;
	cout << "\t\t\t\t\t" << "-------------------------" << endl;
    cout << "\t\t\t\t\t" << "Which mode you want to play" << endl;
    cout << "\t\t\t\t\t" << "---------------------------" << endl;
    cout << "\t\t\t\t\t" << "press 1 for player vs player mode" << endl;
    cout << "\t\t\t\t\t" << "---------------------------------" << endl;
    cout << "\t\t\t\t\t" << "press 2 for player vs computer mode" << endl;
    cout << "\t\t\t\t\t" << "-----------------------------------" << endl;
    cin >> x;
    system("cls");
    
    if(x==1)
    {
    cout<<"player vs player mode\n"<<endl;
    
    for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	a[i][j]='*';
	}
	}
	
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	a1[i][j]='*';
	}
	}
	
	
		//   PLAYER 1 TURN
		
		
	cout<<"\t\t\t\t PALYER 1 TURN"<<endl;
    cout<<"\t\t\t PLACE 5 ships of different size"<<endl;
    int c=0, cr=0, b=0, s=0, d=0;
	for(int k=1;k<=10;k++)
    {
    cout<<endl;
    cout<<"PRESS 1 for CARRIER    (A)"<<endl;
    cout<<"PRESS 2 for BATTLESHIP (B)"<<endl;
    cout<<"PRESS 3 for CRUISER    (C)"<<endl;
    cout<<"PRESS 4 for SUBMARINE  (D)"<<endl;
    cout<<"PRESS 5 for DESTROYER  (E)"<<endl;
    cout<<endl;
    cout<<"enter number = ";
    cin>>num;
    cout<<endl;
    
    if(c>=2)
    {
	while(num==1)
	{
	cout<<"cannot place more carriers ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(b>=2)
    {
	while(num==2)
	{
	cout<<"cannot place more Battleships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(cr>=2)
    {
	while(num==3)
	{
	cout<<"cannot place more cruise ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(s>=2)
    {
	while(num==4)
	{
	cout<<"cannot place more submarine ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(d>=2)
    {
	while(num==5)
	{
	cout<<"cannot place more destroyer ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
    cout<<"press V or v to place vertical "<<endl;
    cout<<"press H or h to place horizontal"<<endl;
    cout<<endl;
    cout<<"position = ";
    cin>>z;
    
	cout<<endl;
	cout<<"enter row no from (0 to 7) = ";
	cin>>row;
	cout<<"enter coloumn no from(0 to 7) = ";
	cin>>col;
	cout<<endl;
	system("cls");
	
	if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
	
	if(num==1)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	c--;
	}
	}
	
	if(num==2)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	b--;
	}
	}
	
	if(num==3)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	cr--;
	}
	}
	
	if(num==4)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	s--;
	}
	}
	
	if(num==5)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	d--;
	}
	}
	
	              //for carrier
	              
	              
	if(num==1 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_c;i++)
    {
    a[row++][col]='A';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_c;i++)
    {
    a[row][col++]='A';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	     //for battle ship
	     
    if(num==2 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_b;i++)
    {
    a[row++][col]='B';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_b;i++)
    {
    a[row][col++]='B';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	
	//for cruise
	
	
	if(num==3 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_cr;i++)
    {
    a[row++][col]='C';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_cr;i++)
    {
    a[row][col++]='C';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	//for submarine
	
	
	if(num==4 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_s;i++)
    {
    a[row++][col]='D';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_s;i++)
    {
    a[row][col++]='D';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	//for destroyer
	
	
	 if(num==5 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_d;i++)
    {
    a[row++][col]='E';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_d;i++)
    {
    a[row][col++]='E';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}

	if(num==1)
    c++;
    if(num==2)
    b++;
    if(num==3)
    cr++;
    if(num==4)
    s++;
    if(num==5)
    d++;
}

            //player 2 turn
       
	system("cls");     
    cout<<"\t\t\t\t PALYER 2 TURN"<<endl;
    cout<<"\t\t\t PLACE 5 ships of different size"<<endl;
    c=0, cr=0, b=0, s=0, d=0;
	for(int k=1;k<=10;k++)
    {
    cout<<endl;
    cout<<"PRESS 1 for CARRIER    (A)"<<endl;
    cout<<"PRESS 2 for BATTLESHIP (B)"<<endl;
    cout<<"PRESS 3 for CRUISER    (C)"<<endl;
    cout<<"PRESS 4 for SUBMARINE  (D)"<<endl;
    cout<<"PRESS 5 for DESTROYER  (E)"<<endl;
    cout<<endl;
    cout<<"enter number = ";
    cin>>num;
    cout<<endl;
    
    if(c>=2)
    {
	while(num==1)
	{
	cout<<"cannot place more carriers ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(b>=2)
    {
	while(num==2)
	{
	cout<<"cannot place more Battleships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(cr>=2)
    {
	while(num==3)
	{
	cout<<"cannot place more cruise ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(s>=2)
    {
	while(num==4)
	{
	cout<<"cannot place more submarine ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(d>=2)
    {
	while(num==5)
	{
	cout<<"cannot place more destroyer ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
    cout<<"press V or v to place vertical "<<endl;
    cout<<"press H or h to place horizontal"<<endl;
    cout<<endl;
    cout<<"position = ";
    cin>>z;
	cout<<endl;
	cout<<"enter row no from (0 to 7) = ";
	cin>>row;
	cout<<"enter coloumn no from(0 to 7) = ";
	cin>>col;
	cout<<endl;
	system("cls");
	
	if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
	
	if(num==1)
	{
	if(a1[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	c--;
	}
	}
	
	if(num==2)
	{
	if(a1[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	b--;
	}
	}
	
	if(num==3)
	{
	if(a1[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	cr--;
	}
	}
	
	if(num==4)
	{
	if(a1[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	s--;
	}
	}
	
	if(num==5)
	{
	if(a1[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	d--;
	}
	}
	
	
	              //for carrier
	              
	              
	if(num==1 && a1[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_c;i++)
    {
    a1[row++][col]='A';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_c;i++)
    {
    a1[row][col++]='A';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a1[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	     //for battle ship
	     
    if(num==2 && a1[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_b;i++)
    {
    a1[row++][col]='B';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_b;i++)
    {
    a1[row][col++]='B';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a1[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	
	//for cruise
	
	
	if(num==3 && a1[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_cr;i++)
    {
    a1[row++][col]='C';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_cr;i++)
    {
    a1[row][col++]='C';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a1[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	//for submarine
	
	
	if(num==4 && a1[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_s;i++)
    {
    a1[row++][col]='D';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_s;i++)
    {
    a1[row][col++]='D';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a1[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	//for destroyer
	
	
	if(num==5 && a1[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_d;i++)
    {
    a1[row++][col]='E';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_d;i++)
    {
    a1[row][col++]='E';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a1[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	if(num==1)
    c++;
    if(num==2)
    b++;
    if(num==3)
    cr++;
    if(num==4)
    s++;
    if(num==5)
   d++;
} 
 
 //// for attacking the ships
 
    bool won=0;
	int pos;
 	int ar1[8][8];
	int ar2[8][8];
	int count1=2;
	for(int i=0;i<8;i++)
	{
	for(int j=0;j<8;j++)
	{
	ar1[i][j]=count1;
	ar2[i][j]=count1;
	count1++;
	}
	}
	
	while(won==0)
	{
	system("cls");
	for(int i=0;i<8;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<8;j++)
	{
	if(i==0)
	cout<<ar2[i][j]<<"      ";
	else
	cout<<ar2[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
    cout<<"Payer 1 enter position to attack: ";
	cin>>pos;
	if(a1[0][pos-2]=='*')
	{
	ar2[0][pos-2]=0;		
	}
	else
	{
	ar2[0][pos-2]=1;
	a1[0][pos-2]='*';
	}
	won=win(a1);
	if(won==1)
	{
    cout<<"Player 1 won the game";
	}
	
	if(won==0)
	{
	system("cls");
	for(int i=0;i<8;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<8;j++)
	{
	if(i==0)
	cout<<ar1[i][j]<<"      ";
	else
	cout<<ar1[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
	cout<<"Payer 2 enter position to attack: ";
	cin>>pos;
	if(a[0][pos-2]=='*')
	{
	ar1[0][pos-2]=0;
			
	}
	else
	{
	ar1[0][pos-2]=1;
	a[0][pos-2]='*';
	}
	won=win(a);
	if(won==1)
	{
	cout<<"Player 2 won the game";
	}
            
    }
}
}


  //--------------------------------------------------------------------------------------------------------------------------------
                 //player vs computer
   //-------------------------------------------------------------------------------------------------------------------------------
   
   
    
    if(x==2)
    {
    cout<<"player vs computer mode\n"<<endl;
    
    for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	a[i][j]='*';
	}
	}
	
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	a1[i][j]='*';
	}
	}
	
	
		//   PLAYER 1 TURN
		
		
	cout<<"\t\t\t\t PALYER 1 TURN"<<endl;
    cout<<"\t\t\t PLACE 5 ships of different size"<<endl;
    int c=0, cr=0, b=0, s=0, d=0;
	for(int k=1;k<=10;k++)
    {
    cout<<endl;
    cout<<"PRESS 1 for CARRIER    (A)"<<endl;
    cout<<"PRESS 2 for BATTLESHIP (B)"<<endl;
    cout<<"PRESS 3 for CRUISER    (C)"<<endl;
    cout<<"PRESS 4 for SUBMARINE  (D)"<<endl;
    cout<<"PRESS 5 for DESTROYER  (E)"<<endl;
    cout<<endl;
    cout<<"enter number = ";
    cin>>num;
    cout<<endl;
    
    if(c>=2)
    {
	while(num==1)
	{
	cout<<"cannot place more carriers ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(b>=2)
    {
	while(num==2)
	{
	cout<<"cannot place more Battleships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(cr>=2)
    {
	while(num==3)
	{
	cout<<"cannot place more cruise ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(s>=2)
    {
	while(num==4)
	{
	cout<<"cannot place more submarine ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
	if(d>=2)
    {
	while(num==5)
	{
	cout<<"cannot place more destroyer ships"<<endl;
	cout<<"input for next ship: ";
	cin>>num;
	} 
	}
	
    cout<<"press V or v to place vertical "<<endl;
    cout<<"press H or h to place horizontal"<<endl;
    cout<<endl;
    cout<<"position = ";
    cin>>z;
	cout<<endl;
	cout<<"enter row no from (0 to 7) = ";
	cin>>row;
	cout<<"enter coloumn no from(0 to 7) = ";
	cin>>col;
	cout<<endl;
	system("cls");
	
	if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(7-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(7-col<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
    
	if(num==1)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	c--;
	}
	}
	
	if(num==2)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	b--;
	}
	}
	
	if(num==3)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	cr--;
	}
	}
	
	if(num==4)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	s--;
	}
	}
	
	if(num==5)
	{
	if(a[row][col]!='*')
	{
	cout<<"ship already placed"<<endl;
	cout<<"input again : ";
	cin>>num;
	d--;
	}
	}
	
	
	              //for carrier
	              
	              
	if(num==1 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_c;i++)
    {
    a[row++][col]='A';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_c;i++)
    {
    a[row][col++]='A';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	     //for battle ship
	     
    if(num==2 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_b;i++)
    {
    a[row++][col]='B';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_b;i++)
    {
    a[row][col++]='B';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	
	//for cruise
	
	
	if(num==3 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_cr;i++)
    {
    a[row++][col]='C';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_cr;i++)
    {
    a[row][col++]='C';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	//for submarine
	
	
	if(num==4 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_s;i++)
    {
    a[row++][col]='D';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_s;i++)
    {
    a[row][col++]='D';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	//for destroyer
	
	
	 if(num==5 && a[row][col]=='*')
    {
	if(z=='v' || z=='V')
	{
    for(int i=0;i<size_d;i++)
    {
    a[row++][col]='E';
    }
    }
    
    else if(z=='h' || z=='H')
    {
    for(int i=0;i<size_d;i++)
    {
    a[row][col++]='E';
    }
	}
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	}
	
	if(num==1)
    c++;
    if(num==2)
    b++;
    if(num==3)
    cr++;
    if(num==4)
    s++;
    if(num==5)
    d++;
}
  
  //computer turn 
  
  
  char q = 'A';
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		a1[i][j]='*';
		}
	}
	for (int i = 0; i < 2; i++)
	{
	for (int j = 0; j < 8; j++)
	{
	a1[i][j] = q;
	}
	}
	q++;
	for (int i = 2; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
	{
	a1[i][j] = q;
	}
	}
	q++;
	for (int i = 4; i < 6; i++)
	{
	for (int j = 0; j < 4; j++)
	{
	a1[i][j] = q;
	}
	}
	q++;
	for (int i = 6; i < 8; i++)
	{
	for (int j = 0; j < 3; j++)
	{
	a1[i][j] = q;
	}
	}
	q++;
	for (int i = 6; i < 8; i++)
	{
	for (int j = 3; j < 5; j++)
	{
	a1[i][j] = q;
	}
	}
	q++;
	
	for(int l=0;l<m;l++)
	{
	cout<<"     "<<l;
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<m;i++)
	{
	cout<<i<<"    ";
	for(int j=0;j<n;j++)
	{
	cout<<a1[i][j]<<"     ";
	}
	cout<<endl;
	}
	cout<<endl;
	
	 //// for attacking the ships
 
    bool won=0;
	int pos;
 	int ar1[8][8];
	int ar2[8][8];
	int count1=2;
	for(int i=0;i<8;i++)
	{
	for(int j=0;j<8;j++)
	{
	ar1[i][j]=count1;
	ar2[i][j]=count1;
	count1++;
	}
	}
	
	while(won==0)
	{
	system("cls");
	for(int i=0;i<8;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<8;j++)
	{
	if(i==0)
	cout<<ar2[i][j]<<"      ";
	else
	cout<<ar2[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
    cout<<"Payer 1 enter position to attack: ";
	cin>>pos;
	if(a1[0][pos-2]=='*')
	{
	ar2[0][pos-2]=0;		
	}
	else
	{
	ar2[0][pos-2]=1;
	a1[0][pos-2]='*';
	}
	won=win(a1);
	if(won==1)
	{
    cout<<"Player 1 won the game";
	}
	system("cls");
	if(won==0)
	{
	for(int i=0;i<8;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<8;j++)
	{
	if(i==0)
	cout<<ar1[i][j]<<"      ";
	else
	cout<<ar1[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
	cout<<"Payer 2 enter position to attack: ";
	srand(time(0));
	pos=(rand()%65)+2;
	if(a[0][pos-2]=='*')
	{
	ar1[0][pos-2]=0;
			
	}
	else
	{
	ar1[0][pos-2]=1;
	a[0][pos-2]='*';
	}
	won=win(a);
	if(won==1)
	{
	cout<<"Player 2 won the game";
	}
            
    }
    }
}

}

/////                                  medium mode

void mediummode()
{
int x, num, row, col;
int size_c = 8, size_b = 5, size_cr = 4, size_s = 3, size_d = 2;
const int m = 12;
const int n = 12;
char a[m][n];
char a1[m][n];
char z;
cout << "\t\t\t\t\t" << "You are playing medium mode" << endl;
cout << "\t\t\t\t\t" << "-------------------------" << endl;
cout << "\t\t\t\t\t" << "Which mode you want to play" << endl;
cout << "\t\t\t\t\t" << "---------------------------" << endl;
cout << "\t\t\t\t\t" << "press 1 for player vs player mode" << endl;
cout << "\t\t\t\t\t" << "---------------------------------" << endl;
cout << "\t\t\t\t\t" << "press 2 for player vs computer mode" << endl;
cout << "\t\t\t\t\t" << "-----------------------------------" << endl;
cin >> x;
system("cls");

if (x == 1)
{
	cout << "player vs player mode\n" << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = '*';
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a1[i][j] = '*';
		}
	}


	//   PLAYER 1 TURN


	cout << "\t\t\t\t PALYER 1 TURN" << endl;
	cout << "\t\t\t PLACE 5 ships of different size" << endl;
	int c = 0, cr = 0, b = 0, s = 0, d = 0;
	for (int k = 1; k <= 15; k++)
	{
		cout << endl;
		cout << "PRESS 1 for CARRIER    (A)" << endl;
		cout << "PRESS 2 for BATTLESHIP (B)" << endl;
		cout << "PRESS 3 for CRUISER    (C)" << endl;
		cout << "PRESS 4 for SUBMARINE  (D)" << endl;
		cout << "PRESS 5 for DESTROYER  (E)" << endl;
		cout << endl;
		cout << "enter number = ";
		cin >> num;
		cout << endl;

		if (c >= 3)
		{
			while (num == 1)
			{
				cout << "cannot place more carriers ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (b >= 3)
		{
			while (num == 2)
			{
				cout << "cannot place more Battleships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (cr >= 3)
		{
			while (num == 3)
			{
				cout << "cannot place more cruise ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (s >= 3)
		{
			while (num == 4)
			{
				cout << "cannot place more submarine ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (d >= 3)
		{
			while (num == 5)
			{
				cout << "cannot place more destroyer ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		cout << "press V or v to place vertical " << endl;
		cout << "press H or h to place horizontal" << endl;
		cout << endl;
		cout << "position = ";
		cin >> z;
		cout << endl;
		cout << "enter row no from (0 to 7) = ";
		cin >> row;
		cout << "enter coloumn no from(0 to 7) = ";
		cin >> col;
		cout << endl;
		system("cls");
		
	if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	

		if (num == 1)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				c--;
			}
		}

		if (num == 2)
		{
		  if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				b--;
			}
		}

		if (num == 3)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				cr--;
			}
		}

		if (num == 4)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				s--;
			}
		}

		if (num == 5)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				d--;
			}
		}


		//for carrier


		if (num == 1 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row++][col] = 'A';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row][col++] = 'A';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for battle ship

		if (num == 2 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row++][col] = 'B';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row][col++] = 'B';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
		}


		//for cruise


		if (num == 3 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row++][col] = 'C';
				} 
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row][col++] = 'C';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for submarine


		if (num == 4 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row++][col] = 'D';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row][col++] = 'D';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for destroyer


		if (num == 5 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row++][col] = 'E';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row][col++] = 'E';
				}
			}


			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		if (num == 1)
			c++;
		if (num == 2)
			b++;
		if (num == 3)
			cr++;
		if (num == 4)
			s++;
		if (num == 5)
			d++;
	}
	
	              //player 2 turn  
	
	

	cout << "\t\t\t\t PALYER 2 TURN" << endl;
	cout << "\t\t\t PLACE 5 ships of different size" << endl;
	c = 0, cr = 0, b = 0, s = 0, d = 0;
	for (int k = 1; k <= 15; k++)
	{
		cout << endl;
		cout << "PRESS 1 for CARRIER    (A)" << endl;
		cout << "PRESS 2 for BATTLESHIP (B)" << endl;
		cout << "PRESS 3 for CRUISER    (C)" << endl;
		cout << "PRESS 4 for SUBMARINE  (D)" << endl;
		cout << "PRESS 5 for DESTROYER  (E)" << endl;
		cout << endl;
		cout << "enter number = ";
		cin >> num;
		cout << endl;

		if (c >= 3)
		{
			while (num == 1)
			{
				cout << "cannot place more carriers ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (b >= 3)
		{
			while (num == 2)
			{
				cout << "cannot place more Battleships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (cr >= 3)
		{
			while (num == 3)
			{
				cout << "cannot place more cruise ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (s >= 3)
		{
			while (num == 4)
			{
				cout << "cannot place more submarine ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (d >= 3)
		{
			while (num == 5)
			{
				cout << "cannot place more destroyer ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		cout << "press V or v to place vertical " << endl;
		cout << "press H or h to place horizontal" << endl;
		cout << endl;
		cout << "position = ";
		cin >> z;
		cout << endl;
		cout << "enter row no from (0 to 7) = ";
		cin >> row;
		cout << "enter coloumn no from(0 to 7) = ";
		cin >> col;
		cout << endl;
		system("cls");

	if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col!=3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col< 1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	

		if (num == 1)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				c--;
			}
		}

		if (num == 2)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				b--;
			}
		}

		if (num == 3)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				cr--;
			}
		}

		if (num == 4)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				s--;
			}
		}

		if (num == 5)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				d--;
			}
		}


		//for carrier


		if (num == 1 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_c; i++)
				{
					a1[row++][col] = 'A';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_c; i++)
				{
					a1[row][col++] = 'A';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for battle ship

		if (num == 2 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_b; i++)
				{
					a1[row++][col] = 'B';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_b; i++)
				{
					a1[row][col++] = 'B';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
		}


		//for cruise


		if (num == 3 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a1[row++][col] = 'C';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a1[row][col++] = 'C';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for submarine


		if (num == 4 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_s; i++)
				{
					a1[row++][col] = 'D';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_s; i++)
				{
					a1[row][col++] = 'D';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for destroyer


		if (num == 5 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_d; i++)
				{
					a1[row++][col] = 'E';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_d; i++)
				{
					a1[row][col++] = 'E';
				}
			}


			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

	if(num==1)
    c++;
    if(num==2)
    b++;
    if(num==3)
    cr++;
    if(num==4)
    s++;
    if(num==5)
   d++;
   
}
   //// attacking 
   
   bool won=0;
	int pos;
 	int ar1[12][12];
	int ar2[12][12];
	int count1=2;
	for(int i=0;i<12;i++)
	{
	for(int j=0;j<12;j++)
	{
	ar1[i][j]=count1;
	ar2[i][j]=count1;
	count1++;
	}
	}
	
	while(won==0)
	{
	system("cls");
	for(int i=0;i<12;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<12;j++)
	{
	if(i==0)
	cout<<ar2[i][j]<<"   ";
	else
	cout<<ar2[i][j]<<"  ";
	}
	cout<<endl;
	cout<<endl;
	}
    cout<<"Payer 1 enter position to attack: ";
	cin>>pos;
	if(a1[0][pos-2]=='*')
	{
	ar2[0][pos-2]=0;		
	}
	else
	{
	ar2[0][pos-2]=1;
	a1[0][pos-2]='*';
	}
	won=win_medium(a1);
	if(won==1)
	{
    cout<<"Player 1 won the game";
	}
	system("cls");
	if(won==0)
	{
	for(int i=0;i<12;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<12;j++)
	{
	if(i==0)
	cout<<ar1[i][j]<<"      ";
	else
	cout<<ar1[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
	cout<<"Payer 2 enter position to attack: ";
	cin>>pos;
	if(a[0][pos-2]=='*')
	{
	ar1[0][pos-2]=0;		
	}
	else
	{
	ar1[0][pos-2]=1;
	a[0][pos-2]='*';
	}
	won=win_medium(a);
	if(won==1)
	{
	cout<<"Player 2 won the game";
	}
            
    }
} 
            
}
        //-----------------------------------------------------------------
                 //player vs computer//
        //-----------------------------------------------------------------
                 
    
    if (x == 2)
{
	cout << "player vs computer mode\n" << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = '*';
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a1[i][j] = '*';
		}
	}


	//   PLAYER 1 TURN


	cout << "\t\t\t\t PALYER 1 TURN" << endl;
	cout << "\t\t\t PLACE 5 ships of different size" << endl;
	int c = 0, cr = 0, b = 0, s = 0, d = 0;
	for (int k = 1; k <= 15; k++)
	{
		cout << endl;
		cout << "PRESS 1 for CARRIER    (A)" << endl;
		cout << "PRESS 2 for BATTLESHIP (B)" << endl;
		cout << "PRESS 3 for CRUISER    (C)" << endl;
		cout << "PRESS 4 for SUBMARINE  (D)" << endl;
		cout << "PRESS 5 for DESTROYER  (E)" << endl;
		cout << endl;
		cout << "enter number = ";
		cin >> num;
		cout << endl;

		if (c >= 3)
		{
			while (num == 1)
			{
				cout << "cannot place more carriers ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (b >= 3)
		{
			while (num == 2)
			{
				cout << "cannot place more Battleships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (cr >= 3)
		{
			while (num == 3)
			{
				cout << "cannot place more cruise ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (s >= 3)
		{
			while (num == 4)
			{
				cout << "cannot place more submarine ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (d >= 3)
		{
			while (num == 5)
			{
				cout << "cannot place more destroyer ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		cout << "press V or v to place vertical " << endl;
		cout << "press H or h to place horizontal" << endl;
		cout << endl;
		cout << "position = ";
		cin >> z;
		cout << endl;
		cout << "enter row no from (0 to 7) = ";
		cin >> row;
		cout << "enter coloumn no from(0 to 7) = ";
		cin >> col;
		cout << endl;
		system("cls");
		
		if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(11-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(11-col<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		
		if (num == 1)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				c--;
			}
		}

		if (num == 2)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				b--;
			}
		}

		if (num == 3)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				cr--;
			}
		}

		if (num == 4)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				s--;
			}
		}

		if (num == 5)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				d--;
			}
		}


		//for carrier


		if (num == 1 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row++][col] = 'A';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row][col++] = 'A';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for battle ship

		if (num == 2 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row++][col] = 'B';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row][col++] = 'B';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
		}


		//for cruise


		if (num == 3 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row++][col] = 'C';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row][col++] = 'C';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for submarine


		if (num == 4 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row++][col] = 'D';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row][col++] = 'D';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for destroyer


		if (num == 5 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row++][col] = 'E';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row][col++] = 'E';
				}
			}


			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		if (num == 1)
			c++;
		if (num == 2)
			b++;
		if (num == 3)
			cr++;
		if (num == 4)
			s++;
		if (num == 5)
			d++;
	}
	// computer turnnnnn
	
	char q = 'A';
	
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			a1[i][j] = q;
		}	
	}
	q++;
	for (int i = 3; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a1[i][j] = q;
		}
	}
	q++;
	for (int i = 6; i < 9; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a1[i][j] = q;
		}
	}
	q++;
	for (int i = 9; i < 12; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		a1[i][j] = q;
		}
	}
	q++;
	for (int i = 9; i < 12; i++)
	{
		for (int j = 3; j < 5; j++)
		{
			a1[i][j] = q;
		}
	}
		q++;
		
		for (int l = 0; l < m; l++)
		{
		cout << "     " << l;
		}
		cout << endl;
		cout << endl;
		
		for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
				cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			
			  //// attacking 
   
   bool won=0;
	int pos;
 	int ar1[12][12];
	int ar2[12][12];
	int count1=2;
	for(int i=0;i<12;i++)
	{
	for(int j=0;j<12;j++)
	{
	ar1[i][j]=count1;
	ar2[i][j]=count1;
	count1++;
	}
	}
	
	while(won==0)
	{
	system("cls");
	for(int i=0;i<12;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<12;j++)
	{
	if(i==0)
	cout<<ar2[i][j]<<"      ";
	else
	cout<<ar2[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
    cout<<"Payer 1 enter position to attack: ";
	cin>>pos;
	if(a1[0][pos-2]=='*')
	{
	ar2[0][pos-2]=0;		
	}
	else
	{
	ar2[0][pos-2]=1;
	a1[0][pos-2]='*';
	}
	won=win_medium(a1);
	if(won==1)
	{
    cout<<"Player 1 won the game";
	}
	system("cls");
	if(won==0)
	{
	for(int i=0;i<12;i++)
	{
	cout<<"\t\t\t\t";
	for(int j=0;j<12;j++)
	{
	if(i==0)
	cout<<ar1[i][j]<<"      ";
	else
	cout<<ar1[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
	cout<<"Payer 2 enter position to attack: ";
	srand(time(0));
	pos=(rand()%145)+2;
	if(a[0][pos-2]=='*')
	{
	ar1[0][pos-2]=0;		
	}
	else
	{
	ar1[0][pos-2]=1;
	a[0][pos-2]='*';
	}
	won=win_medium(a);
	if(won==1)
	{
	cout<<"Player 2 won the game";
	}
            
    }
    }

}

}

           //hard mode

void hardmode()
{
int x, num, row, col;
int size_c = 8, size_b = 5, size_cr = 4, size_s = 3, size_d = 2;
const int m = 15;
const int n = 15;
char a[m][n];
char a1[m][n];
char z;
cout << "\t\t\t\t\t" << "You are playing medium mode" << endl;
cout << "\t\t\t\t\t" << "-------------------------" << endl;
cout << "\t\t\t\t\t" << "Which mode you want to play" << endl;
cout << "\t\t\t\t\t" << "---------------------------" << endl;
cout << "\t\t\t\t\t" << "press 1 for player vs player mode" << endl;
cout << "\t\t\t\t\t" << "---------------------------------" << endl;
cout << "\t\t\t\t\t" << "press 2 for player vs computer mode" << endl;
cout << "\t\t\t\t\t" << "-----------------------------------" << endl;
cin >> x;
system("cls");

if (x == 1)
{
	cout << "player vs player mode\n" << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = '*';
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a1[i][j] = '*';
		}
	}


	//   PLAYER 1 TURN

	cout << "\t\t\t\t PALYER 1 TURN" << endl;
	cout << "\t\t\t PLACE 5 ships of different size" << endl;
	int c = 0, cr = 0, b = 0, s = 0, d = 0;
	for (int k = 1; k <= 20; k++)
	{
		cout << endl;
		cout << "PRESS 1 for CARRIER    (A)" << endl;
		cout << "PRESS 2 for BATTLESHIP (B)" << endl;
		cout << "PRESS 3 for CRUISER    (C)" << endl;
		cout << "PRESS 4 for SUBMARINE  (D)" << endl;
		cout << "PRESS 5 for DESTROYER  (E)" << endl;
		cout << endl;
		cout << "enter number = ";
		cin >> num;
		cout << endl;

		if (c >= 4)
		{
			while (num == 1)
			{
				cout << "cannot place more carriers ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (b >= 4)
		{
			while (num == 2)
			{
				cout << "cannot place more Battleships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (cr >= 4)
		{
			while (num == 3)
			{
				cout << "cannot place more cruise ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (s >= 4)
		{
			while (num == 4)
			{
				cout << "cannot place more submarine ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (d >= 4)
		{
			while (num == 5)
			{
				cout << "cannot place more destroyer ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		cout << "press V or v to place vertical " << endl;
		cout << "press H or h to place horizontal" << endl;
		cout << endl;
		cout << "position = ";
		cin >> z;
		cout << endl;
		cout << "enter row no from (0 to 7) = ";
		cin >> row;
		cout << "enter coloumn no from(0 to 7) = ";
		cin >> col;
		cout << endl;
		system("cls");
		
	if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	

		if (num == 1)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				c--;
			}
		}

		if (num == 2)
		{
		  if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				b--;
			}
		}

		if (num == 3)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				cr--;
			}
		}

		if (num == 4)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				s--;
			}
		}

		if (num == 5)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				d--;
			}
		}


		//for carrier


		if (num == 1 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row++][col] = 'A';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row][col++] = 'A';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for battle ship

		if (num == 2 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row++][col] = 'B';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row][col++] = 'B';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
		}


		//for cruise


		if (num == 3 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row++][col] = 'C';
				} 
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row][col++] = 'C';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for submarine


		if (num == 4 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row++][col] = 'D';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row][col++] = 'D';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for destroyer


		if (num == 5 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row++][col] = 'E';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row][col++] = 'E';
				}
			}


			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		if (num == 1)
			c++;
		if (num == 2)
			b++;
		if (num == 3)
			cr++;
		if (num == 4)
			s++;
		if (num == 5)
			d++;
	}
	
	              //player 2 turn  
	
	

	cout << "\t\t\t\t PALYER 2 TURN" << endl;
	cout << "\t\t\t PLACE 5 ships of different size" << endl;
	c = 0, cr = 0, b = 0, s = 0, d = 0;
	for (int k = 1; k <= 20; k++)
	{
		cout << endl;
		cout << "PRESS 1 for CARRIER    (A)" << endl;
		cout << "PRESS 2 for BATTLESHIP (B)" << endl;
		cout << "PRESS 3 for CRUISER    (C)" << endl;
		cout << "PRESS 4 for SUBMARINE  (D)" << endl;
		cout << "PRESS 5 for DESTROYER  (E)" << endl;
		cout << endl;
		cout << "enter number = ";
		cin >> num;
		cout << endl;

		if (c >= 4)
		{
			while (num == 1)
			{
				cout << "cannot place more carriers ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (b >= 4)
		{
			while (num == 2)
			{
				cout << "cannot place more Battleships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (cr >= 4)
		{
			while (num == 3)
			{
				cout << "cannot place more cruise ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (s >= 4)
		{
			while (num == 4)
			{
				cout << "cannot place more submarine ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (d >= 4)
		{
			while (num == 5)
			{
				cout << "cannot place more destroyer ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		cout << "press V or v to place vertical " << endl;
		cout << "press H or h to place horizontal" << endl;
		cout << endl;
		cout << "position = ";
		cin >> z;
		cout << endl;
		cout << "enter row no from (0 to 7) = ";
		cin >> row;
		cout << "enter coloumn no from(0 to 7) = ";
		cin >> col;
		cout << endl;
		system("cls");

	if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col!=3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col< 1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	

		if (num == 1)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				c--;
			}
		}

		if (num == 2)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				b--;
			}
		}

		if (num == 3)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				cr--;
			}
		}

		if (num == 4)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				s--;
			}
		}

		if (num == 5)
		{
			if (a1[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				d--;
			}
		}


		//for carrier


		if (num == 1 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_c; i++)
				{
					a1[row++][col] = 'A';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_c; i++)
				{
					a1[row][col++] = 'A';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for battle ship

		if (num == 2 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_b; i++)
				{
					a1[row++][col] = 'B';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_b; i++)
				{
					a1[row][col++] = 'B';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
		}


		//for cruise


		if (num == 3 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a1[row++][col] = 'C';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a1[row][col++] = 'C';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for submarine


		if (num == 4 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_s; i++)
				{
					a1[row++][col] = 'D';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_s; i++)
				{
					a1[row][col++] = 'D';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for destroyer


		if (num == 5 && a1[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_d; i++)
				{
					a1[row++][col] = 'E';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_d; i++)
				{
					a1[row][col++] = 'E';
				}
			}


			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if (i <= 9)
					cout << " " << i << "    ";
				else
					cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

	if(num==1)
    c++;
    if(num==2)
    b++;
    if(num==3)
    cr++;
    if(num==4)
    s++;
    if(num==5)
   d++;
   
}
   //// attacking 
   
    bool won=0;
	int pos;
 	int ar1[15][15];
	int ar2[15][15];
	int count1=2;
	for(int i=0;i<15;i++)
	{
	for(int j=0;j<15;j++)
	{
	ar1[i][j]=count1;
	ar2[i][j]=count1;
	count1++;
	}
	}
	
	while(won==0)
	{
	system("cls");
	for(int i=0;i<15;i++)
	{
	cout<<"\t\t";
	for(int j=0;j<15;j++)
	{
	if(i==0)
	cout<<ar2[i][j]<<"   ";
	else
	cout<<ar2[i][j]<<"  ";
	}
	cout<<endl;
	cout<<endl;
	}
    cout<<"Payer 1 enter position to attack: ";
	cin>>pos;
	if(a1[0][pos-2]=='*')
	{
	ar2[0][pos-2]=0;		
	}
	else
	{
	ar2[0][pos-2]=1;
	a1[0][pos-2]='*';
	}
	won=win_hard(a1);
	if(won==1)
	{
    cout<<"Player 1 won the game";
	}
	system("cls");
	if(won==0)
	{
	for(int i=0;i<15;i++)
	{
	cout<<"\t\t";
	for(int j=0;j<15;j++)
	{
	if(i==0)
	cout<<ar1[i][j]<<"      ";
	else
	cout<<ar1[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
	cout<<"Payer 2 enter position to attack: ";
	cin>>pos;
	if(a[0][pos-2]=='*')
	{
	ar1[0][pos-2]=0;		
	}
	else
	{
	ar1[0][pos-2]=1;
	a[0][pos-2]='*';
	}
	won=win_hard(a);
	if(won==1)
	{
	cout<<"Player 2 won the game";
	}
            
    }
} 
            
}
        //-----------------------------------------------------------------
                 //player vs computer//
        //-----------------------------------------------------------------
                 
    
    if (x == 2)
{
	cout << "player vs computer mode\n" << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = '*';
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a1[i][j] = '*';
		}
	}


	//   PLAYER 1 TURN


	cout << "\t\t\t\t PALYER 1 TURN" << endl;
	cout << "\t\t\t PLACE 5 ships of different size" << endl;
	int c = 0, cr = 0, b = 0, s = 0, d = 0;
	for (int k = 1; k <= 20; k++)
	{
		cout << endl;
		cout << "PRESS 1 for CARRIER    (A)" << endl;
		cout << "PRESS 2 for BATTLESHIP (B)" << endl;
		cout << "PRESS 3 for CRUISER    (C)" << endl;
		cout << "PRESS 4 for SUBMARINE  (D)" << endl;
		cout << "PRESS 5 for DESTROYER  (E)" << endl;
		cout << endl;
		cout << "enter number = ";
		cin >> num;
		cout << endl;

		if (c >= 4)
		{
			while (num == 1)
			{
				cout << "cannot place more carriers ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (b >= 4)
		{
			while (num == 2)
			{
				cout << "cannot place more Battleships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (cr >= 4)
		{
			while (num == 3)
			{
				cout << "cannot place more cruise ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (s >= 4)
		{
			while (num == 4)
			{
				cout << "cannot place more submarine ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		if (d >= 4)
		{
			while (num == 5)
			{
				cout << "cannot place more destroyer ships" << endl;
				cout << "input for next ship: ";
				cin >> num;
			}
		}

		cout << "press V or v to place vertical " << endl;
		cout << "press H or h to place horizontal" << endl;
		cout << endl;
		cout << "position = ";
		cin >> z;
		cout << endl;
		cout << "enter row no from (0 to 7) = ";
		cin >> row;
		cout << "enter coloumn no from(0 to 7) = ";
		cin >> col;
		cout << endl;
		system("cls");
		
		if(num==1)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<7)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==2)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<4)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==3)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<3)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
		if(num==4)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<2)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		if(num==5)
	{
	if(z=='v' || z=='V')
	{
    while(14-row<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input row no again : ";
    cin>>row;
	}
    }
    
    if(z=='H' || z=='h')
	{
    while(14-col<1)
    {
    cout<<"There is less space to place ship"<<endl;
    cout<<"input col no again: ";
    cin>>col;
	}
    }
	
	}
	
		
		if (num == 1)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				c--;
			}
		}

		if (num == 2)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				b--;
			}
		}

		if (num == 3)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				cr--;
			}
		}

		if (num == 4)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				s--;
			}
		}

		if (num == 5)
		{
			if (a[row][col] != '*')
			{
				cout << "ship already placed" << endl;
				cout << "input again : ";
				cin >> num;
				d--;
			}
		}


		//for carrier


		if (num == 1 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row++][col] = 'A';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_c; i++)
				{
					a[row][col++] = 'A';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for battle ship

		if (num == 2 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row++][col] = 'B';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_b; i++)
				{
					a[row][col++] = 'B';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			cout << endl;
		}


		//for cruise


		if (num == 3 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row++][col] = 'C';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_cr; i++)
				{
					a[row][col++] = 'C';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for submarine


		if (num == 4 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row++][col] = 'D';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_s; i++)
				{
					a[row][col++] = 'D';
				}
			}

			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		//for destroyer


		if (num == 5 && a[row][col] == '*')
		{
			if (z == 'v' || z == 'V')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row++][col] = 'E';
				}
			}

			else if (z == 'h' || z == 'H')
			{
				for (int i = 0; i < size_d; i++)
				{
					a[row][col++] = 'E';
				}
			}


			for (int l = 0; l < m; l++)
			{
				cout << "     " << l;
			}
			cout << endl;
			cout << endl;

			for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
					cout << a[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
		}

		if (num == 1)
			c++;
		if (num == 2)
			b++;
		if (num == 3)
			cr++;
		if (num == 4)
			s++;
		if (num == 5)
			d++;
	}
	// computer turnnnnn
	
	char q = 'A';
	
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			a1[i][j] = q;
		}	
	}
	q++;
	for (int i = 4; i < 8; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a1[i][j] = q;
		}
	}
	q++;
	for (int i = 7; i < 11; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a1[i][j] = q;
		}
	}
	q++;
	for (int i = 10; i < 15; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		a1[i][j] = q;
		}
	}
	q++;
	for (int i = 10; i < 15; i++)
	{
		for (int j = 3; j < 5; j++)
		{
			a1[i][j] = q;
		}
	}
		q++;
		
		for (int l = 0; l < m; l++)
		{
		cout << "     " << l;
		}
		cout << endl;
		cout << endl;
		
		for (int i = 0; i < m; i++)
			{
				if(i<=9)
				cout <<" "<< i << "    ";
				else
				cout << i << "    ";
				for (int j = 0; j < n; j++)
				{
				cout << a1[i][j] << "     ";
				}
				cout << endl;
			}
			cout << endl;
			
			  //// attacking 
   
   bool won=0;
	int pos;
 	int ar1[12][12];
	int ar2[12][12];
	int count1=2;
	for(int i=0;i<12;i++)
	{
	for(int j=0;j<12;j++)
	{
	ar1[i][j]=count1;
	ar2[i][j]=count1;
	count1++;
	}
	}
	
	while(won==0)
	{
	system("cls");
	for(int i=0;i<15;i++)
	{
	cout<<"\t\t";
	for(int j=0;j<15;j++)
	{
	if(i==0)
	cout<<ar2[i][j]<<"      ";
	else
	cout<<ar2[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
    cout<<"Payer 1 enter position to attack: ";
	cin>>pos;
	if(a1[0][pos-2]=='*')
	{
	ar2[0][pos-2]=0;		
	}
	else
	{
	ar2[0][pos-2]=1;
	a1[0][pos-2]='*';
	}
	won=win_hard(a1);
	if(won==1)
	{
    cout<<"Player 1 won the game";
	}
	system("cls");
	if(won==0)
	{
	for(int i=0;i<15;i++)
	{
	cout<<"\t\t";
	for(int j=0;j<15;j++)
	{
	if(i==0)
	cout<<ar1[i][j]<<"      ";
	else
	cout<<ar1[i][j]<<"     ";
	}
	cout<<endl;
	cout<<endl;
	}
	cout<<"Payer 2 enter position to attack: ";
	srand(time(0));
	pos=(rand()%226)+2;
	if(a[0][pos-2]=='*')
	{
	ar1[0][pos-2]=0;		
	}
	else
	{
	ar1[0][pos-2]=1;
	a[0][pos-2]='*';
	}
	won=win_hard(a);
	if(won==1)
	{
	cout<<"Player 2 won the game";
	}
            
    }
    }

}

}



void playgame()
{
    int x;
    cout << "\t\t\t\t\t" << "enter mode you want to play" << endl;
    cout << "\t\t\t\t\t" << "---------------------------" << endl;
    cout << "\t\t\t\t\t" << "press 1 for EASY MODE" << endl;
    cout << "\t\t\t\t\t" << "---------------------" << endl;
    cout << "\t\t\t\t\t" << "press 2 foR MEDIUM MODE" << endl;
    cout << "\t\t\t\t\t" << "-----------------------" << endl;
    cout << "\t\t\t\t\t" << "press 3 foR HARD MODE" << endl;
    cout << "\t\t\t\t\t" << "---------------------" << endl;
    cin >> x;
    system("cls");
    if(x==1)
    {
    easymode();
	}
	else if(x==2)
	{
	mediummode();
	}
	else if(x==3)
	{
	hardmode();
	}
    
}


void mainmenu()
{
    int y,j;
    
    cout << "\t\t\t\t\t" << "-------------------------------" << endl;
    cout<<  "\t\t\t\t\t\t" <<"BATTLE SHIP GAME "<<endl;
    cout << "\t\t\t\t\t" << "-------------------------------\n\n" << endl;
    cout << "\t\t\t\t\t" << "PLAY GAME(PRESS 1)" << endl;
    cout << "\t\t\t\t\t" << "------------------" << endl;
    cout << "\t\t\t\t\t" << "INFORMATION SECTION(PRESS 2)" << endl;
    cout << "\t\t\t\t\t" << "----------------------------" << endl;
    cout << "\t\t\t\t\t" << "CREDIT SECTION(PRESS 3)" << endl;
    cout << "\t\t\t\t\t" << "-----------------------" << endl;
    cout << "\t\t\t\t\t" << "TO EXIT(PRESS 4)" << endl;
    cout << "\t\t\t\t\t" << "----------------" << endl;
    cin >> y;
    system("cls");
    if (y == 1)
    {
    playgame();
    }
    else if (y == 2)
    {
    instructions();
    cout << endl;
    cout << endl;

    cout << "\t\t\t\t" << "press 1 to return to main menu" << endl;
    cin >> j;

    if (j == 1)
    mainmenu();
    }
    else if(y==3)
    {
    credit();
    cout << "\t\t\t\t" << "RETURN TO MAIN MENU(PRESS 1)" << endl;
    cin >> j;

    if (j == 1)
    mainmenu();
		
	}
	
	else if(y==4)
	{
	cout<<"THANKS FOR PLAYING"<<endl;
	}
}


int main()
{
mainmenu();
}



