//
//  convert.cpp
//  
//
//  Created by Rawdhah alshaqaq on 9/8/19.
//


int main(){
    
    float gallon, liter, result;
    int choice;
    bool Quit = false;
    
    while(!Quit){
        cout<<  "--------Menu --------------\n";
        cout << "1. Convert Gallon to Liter \n";
        cout << "2. Convert Liter to Gallon \n";
        cout << "3. Exit \n";
        cout << "---------------------------\n";
        cout << "Your Choice is : ";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout << "Enter your gallon value to be converted: ";
                cin >> gallon;
                result = gallon * 3.78541;
                cout << gallon << " Gallons to Liter is " << result <<" Liter "<<endl;
                break;
                
            case 2:
                cout << "Enter your liter value to be converted: ";
                cin >> liter;
                result = liter / 3.78541;
                cout << liter << " Liter to Gallon is " << result <<" Gallon "<<endl;
                break;
                
            case 3:
                cout <<"Thanks...\n \n";
                Quit = true;
                break;
                
            default:
                cout <<"Enter Valid choice . \n";
                cin >> choice;
                break;
        }
        
    }
    return 0;
    
}

