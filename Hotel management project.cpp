#include <iostream>

using namespace std;
int main(){
    //total money
    int totalMoney = 0;
    int totalNumberOfRooms = 50, roomsAvailable = 50, roomsBooked = 0, roomsInRenuation = 0;
    //roomsForPerson
    int roomsFor1 = 5, roomsFor2 = 20,roomsFor3 = 10, roomsFor4 = 15;
    
    //food stuff (breakfast)
    int  frenchToast = 0, waffels = 0 , pancake = 0, wholegrainToast = 0, breadButter = 0;

    //food stuff (lunch/dinner)
    int  biryani = 0, soup = 0, salad = 0, pannerTadka = 0, pannertikka = 0, butterNan = 0, tandoorRoti = 0, chappati = 0;
    //food related stuff
    int foodid ; 
    
    //Other variables
    int choice;

    menu:
    cout<<"WELCOME TO HOTEL"<<endl;
    cout<<"Enter the option"<<endl;
    cout<<"\t1. Book Room"<<endl;   
    cout<<"\t2. checkout"<<endl;
    cout<<"\t3. Order food"<<endl;
    cout<<"\t4. Show all information"<<endl;
    cout<<"\t0. Exit"<<endl;
    cin>>choice;

    switch(choice){
        case 0:
        exit(0);
        choosePersons:
        case 1:
        int choice;
        cout<<"How many people do you want to book room for"<<endl;
        cout<<"Enter choice"<<endl;
        cout<<"\t 1. 1 person  (1000INR)"<<endl;
        cout<<"\t 2. 2 person  (2000INR)"<<endl;
        cout<<"\t 3. 3 person  (3000INR)"<<endl;
        cout<<"\t 4. 4 person  (4000INR)"<<endl;
        cout<<"\t Enter 0 to go at previous step"<<endl;
        cin>>choice;
        
        switch(choice){
            case 0:
            goto menu;

            //for rooms with person 1

            case 1:
            int bookroom1;
            cout<<"Enter 1 to confirm the room \nEnter 2-9 to go to previous step \nEnter 0 to goto menu"<<endl;
            cin>>bookroom1;
            if(bookroom1 == 1){
         
            
                if(roomsFor1 > 0){

                    roomsAvailable = roomsAvailable - 1;
                    roomsBooked = roomsBooked + 1;
                    roomsFor1 = roomsFor1 - 1;
                    totalMoney = totalMoney + 1000;
                    cout<<"your room for 1 person has been confirmed :)"<<endl;
                    break;
                
                }
                else{
                    cout<<"\tNo room for 1 person is not available :( "<<endl;
                    cout<<"\tYou can try rooms for differnt person"<<endl;
                    goto choosePersons;
                }
            
            }
            else if(bookroom1 == 0){
                goto menu;
            }
            else{
                goto choosePersons;
            }
            

            //for person 2
            case 2:
            int bookroom2;
            cout<<"Enter 1 to confirm the room \nEnter 2-9 to go to previous step \nEnter 0 to go to menu"<<endl;
            cin>>bookroom2;
            if(bookroom2 == 1){
         
            
                if(roomsFor2 > 0){

                    roomsAvailable = roomsAvailable - 1;
                    roomsBooked = roomsBooked + 1;
                    roomsFor2 = roomsFor2 - 1;
                    totalMoney = totalMoney + 2000;
                    cout<<"your room for 2 person has been confirmed :)"<<endl;
                    break;
                
                }
                else{
                    cout<<"\tNo room for 2 person is not available :( "<<endl;
                    cout<<"\tYou can try rooms for differnt person"<<endl;
                    goto choosePersons;
                }
            
            }
            else if(bookroom2 == 0){
                goto menu;
            }
            else{
                goto choosePersons;
            }
            

            //for 3 people
            case 3:
            int bookroom3;
            cout<<"Enter 1 to confirm the room \nEnter 2-9 to go to previous step \nEnter 0 to go to menu"<<endl;
            cin>>bookroom3;
            if(bookroom3 == 1){
         
            
                if(roomsFor3 > 0){

                    roomsAvailable = roomsAvailable - 1;
                    roomsBooked = roomsBooked + 1;
                    roomsFor3 = roomsFor3 - 1;
                    totalMoney = totalMoney + 3000;
                    cout<<"your room for 3 person has been confirmed :)"<<endl;
                    break;
                
                }
                else{
                    cout<<"\tNo room for 3 person is not available :( "<<endl;
                    cout<<"\tYou can try rooms for differnt person"<<endl;
                    goto choosePersons;
                }
            
            }
            else if(bookroom3 == 0){
                goto menu;
            }
            else{
                goto choosePersons;
            }
            

            // for 4 people
            case 4:
            int bookroom4;
            cout<<"Enter 1 to confirm the room \nEnter 2-9 to go to previous step \nEnter 0 to go to menu"<<endl;
            cin>>bookroom4;
            if(bookroom4 == 1){
         
            
                if(roomsFor4 > 0){

                    roomsAvailable = roomsAvailable - 1;
                    roomsBooked = roomsBooked + 1;
                    roomsFor4 = roomsFor4 - 1;
                    totalMoney = totalMoney + 4000;
                    cout<<"your room for 4 person has been confirmed :)"<<endl;
                    break;
                
                }
                else{
                    cout<<"\tNo room for 4 person is not available :( "<<endl;
                    cout<<"\tYou can try rooms for differnt person"<<endl;
                    goto choosePersons;
                }
            
            }
            else if(bookroom4 == 0){
                goto menu;
            }
            else{
                goto choosePersons;
            }
            
            
            
        
            

        }
        goto menu;
        // Checkout
        checkoutPeople:
        case 2:
        cout<<"which room is vacant now?"<<endl;
        cout<<"0. Enter 0 to go to previous options"<<endl;
        cout<<"1. Room for 1 person"<<endl;
        cout<<"2. Room for 2 person"<<endl;
        cout<<"3. Room for 3 person"<<endl;
        cout<<"4. Room for 4 person"<<endl;
        int vacantRoom;
        cin>>vacantRoom;
        if(vacantRoom < 5 && vacantRoom >= 0)
        {
        switch(vacantRoom)
        {
            case 0:
            goto menu;
            // checkout for 1 person
            case 1:
            if(roomsFor1 < 6 && roomsFor1 > 0 )
            {
            roomsAvailable += 1;
            roomsBooked -= 1;
            roomsFor1 += 1;
            cout<<"Room marked for 1 person is marked as vacant"<<endl;
            goto menu;
            }
            else{
                cout<<"Checkout for 1 person unsucessful"<<endl;
                cout<<"Plsease enter a valid response"<<endl;
                goto menu;
            }
            // checkout for 2 person
            case 2:
            if(roomsFor2 < 21 && roomsFor2 > 0 ){
            roomsAvailable += 1;
            roomsBooked -= 1;
            roomsFor2 += 1;
            cout<<"Room marked for 2 people is marked as vacant"<<endl;
            goto menu;
            }
            else{
                cout<<"Checkout for 2 people unsucessful"<<endl;
                cout<<"Plsease enter a valid response"<<endl;
                goto menu;
            }
            // checkout for 3 person
            case 3:
            if(roomsFor3 < 11 && roomsFor3 > 0 ){
            roomsAvailable += 1;
            roomsBooked -= 1;
            roomsFor3 += 1;
            cout<<"Room marked for 3 people is marked as vacant"<<endl;
            goto menu;
            }
            else{
                cout<<"Checkout for 3 people unsucessful"<<endl;
                cout<<"Plsease enter a valid response"<<endl;
                goto menu;
            }

            // checkout for 4 person
            case 4:
            if(roomsFor4 < 16 && roomsFor4 > 0 ){
            roomsAvailable += 1;
            roomsBooked -= 1;
            roomsFor4 += 1;
            cout<<"Room marked for 4 people is marked as vacant"<<endl;
            goto menu;
            }
            else{
                cout<<"Checkout for 4 people unsucessful"<<endl;
                cout<<"Plsease enter a valid response"<<endl;
                goto menu;
            }
            
            
        
        }
        }
        else{
            cout<<"enter a valid room"<<endl;
            goto checkoutPeople;
        }
        





        //food items  frenchToast = 0, waffels = 0 , pancake = 0, wholegrainToast = 0;  biryani = 0, soup = 0, salad = 0, pannerTadka = 0, pannertikka = 0, butterNan = 0, tandoorRoti = 0, chappati = 0;
        foodMenu:
        case 3:
        cout<<"             ----Menu----"<<endl;
        cout<<"               Breakfast"<<endl;
        cout<<"1. French Toast                         79Rs"<<endl;
        cout<<"2. Waffels                              89Rs"<<endl;
        cout<<"3. Pancake                              149Rs"<<endl;
        cout<<"4. Wholegrain Toast                     125Rs"<<endl;
        cout<<"5. Bread Butter                         29Rs"<<endl;
        cout<<"             Lunch/Dinner"<<endl;
        cout<<"6. Tomato Soup                          79Rs"<<endl;
        cout<<"7. Salad                                199Rs"<<endl;
        cout<<"8. Panner Tadka                         399Rs"<<endl;
        cout<<"9. Panner Tikka                         449Rs"<<endl;
        cout<<"10.Butter Nan                           89Rs"<<endl;
        cout<<"11.Tandoori Roti                        49Rs"<<endl;
        cout<<"12.Biryani                              299Rs"<<endl;
        cout<<"enter the number of food that you want"<<endl;
        
        cin>>foodid;
        if(foodid < 13 && foodid >0){
            switch(foodid){
                //for frenchToast
                case 1:
                frenchToast += 1;
                totalMoney = totalMoney + 79;
                int addFood1;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood1;
                if(addFood1 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for waffels
                case 2:
                waffels += 1;
                totalMoney = totalMoney + 89;
                int addFood2;
                cout<< "Do you want to add more food? 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood2;
                if(addFood2 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for pancake
                case 3:
                pancake += 1;
                totalMoney = totalMoney + 149;
                int addFood3;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood3;
                if(addFood3 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for wholegrainToast
                case 4:
                wholegrainToast += 1;
                 totalMoney = totalMoney + 125;
                int addFood4;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood4;
                if(addFood4 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for breadButter
                case 5:
                breadButter += 1;
                totalMoney = totalMoney + 29;
                int addFood5;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood5;
                if(addFood5 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                
                //for soup
                case 6:
                soup += 1;
                totalMoney = totalMoney + 79;
                int addFood6;
                cout<< "Do you want to add more food? 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood6;
                if(addFood6 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for salad
                case 7:
                salad += 1;
                totalMoney = totalMoney + 199;
                int addFood7;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood7;
                if(addFood7 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for pannerTadka
                case 8:
                pannerTadka += 1;
                 totalMoney = totalMoney + 399;
                int addFood8;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood8;
                if(addFood8 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for pannertikka
                case 9:
                pannertikka += 1;
                totalMoney = totalMoney + 449;
                int addFood9;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood9;
                if(addFood9 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }

                //for butterNan
                case 10:
                butterNan += 1;
                totalMoney = totalMoney + 89;
                int addFood10;
                cout<< "Do you want to add more food? 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood10;
                if(addFood10 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for tandoorRoti
                case 11:
                tandoorRoti += 1;
                totalMoney = totalMoney + 49;
                int addFood11;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood11;
                if(addFood11 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }
                //for biryani
                case 12:
                biryani += 1;
                 totalMoney = totalMoney + 299;
                int addFood12;
                cout<< "Do you want to add more food 1 for yes,enter 2 to confirm"<<endl;
                cin>>addFood12;
                if(addFood12 == 1){
                    goto foodMenu;
                }
                else{
                    cout<<"your food will be delivered soon!!"<<endl;
                    break;
                }

            }

        }
        else{
            cout<<"Invalid response"<<endl;
            goto foodMenu;
        }
        goto menu;
        
        
        
        case 4:
        cout<<"  Rooms available: "<<roomsAvailable<<endl;
        cout<<"         Rooms       Available Rooms"<<endl;
        cout<<"    Rooms booked:    "<<roomsBooked<<endl;
        cout<<"     Rooms for 1:    "<<roomsFor1<<endl;
        cout<<"     Rooms for 2:    "<<roomsFor2<<endl;
        cout<<"     Rooms for 3:    "<<roomsFor3<<endl;
        cout<<"     Rooms for 4:    "<<roomsFor4<<endl;
        cout<<"Dishes sold"<<endl;
        cout<<"    French Toast: "<<frenchToast<<endl;
        cout<<"         Waffels: "<<waffels<<endl;
        cout<<"         Pancake: "<<pancake<<endl;
        cout<<"Wholegrain Toast: "<<wholegrainToast<<endl;
        cout<<"    Bread Butter: "<<breadButter<<endl;
        cout<<"     Tomato Soup: "<<soup<<endl;
        cout<<"           Salad: "<<salad<<endl;
        cout<<"    Panner Tadka: "<<pannerTadka<<endl;
        cout<<"    Panner Tikka: "<<pannertikka<<endl;
        cout<<"      Butter Nan: "<<butterNan<<endl;
        cout<<"   Tandoori Roti: "<<tandoorRoti<<endl;
        cout<<"         Biryani: "<<biryani<<endl;
        cout<<"   Total revenue: "<<totalMoney<<endl;
        goto menu;

        default:
        cout<<"invalid response"<<endl;
        goto menu;


    } 
}
