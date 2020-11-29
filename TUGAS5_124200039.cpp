#include<iostream>
using namespace std ;
int main ()
{
	int a,b,c, y,z ;
	
cout<<"========================================"<<endl;
		cout<<"GAMBAR BANGUN DATAR"<<endl;
		cout<<"1. Kotak bolong"<<endl ;
		cout<<"2. Segitiga"<<endl ;
cout<<"========================================"<<endl;
		cout<<"silahkan pilih";cin>>a ;

	
	switch(a) 
	{
		case 1:
			cout<<"Panjang :";
				cin>>a ;
					cout<<"Lebar :";	
						cin>>b ;
							for (c=1 ; c<=a ; c++)
							{
						for (y=1 ; y<=b; y++)
						{				
					if (c==1 || c==a || y==1 || y== b)
					{
				cout<<"*";
				}
			else
			{
		cout<<" ";
		}
		}
	cout<<endl ;
	}
break ;
	
	case 2 :
		cout<<"tinggi";
			cin>>a ;
				for(y= 1 ; y<=a ; y++)
					{
						z=1 ;
					cout<<y;
				for(c=1 ; c<y ;c++){
			cout<<" "<<y+(a*c)-z ;
		z=z+c+1 ;
	}
	cout<<endl ;
	}
}
}
