class Train
{
    private:
        string name;  
        int color;
        bool hasConductor;
        double boilerTemp;
        int passengers;
        int cars;
        double speed;
        
    public:
        // getters & setters
        Train();
        Train(string, bool, int....);
        void deleteCar();
};

void Train::deleteCar()
{
    this->cars--;
}


int main()
{
    Train myTrain;
    
    // use the dot operator to invoke a member function
    myTrain.deleteCar();
    
    
    // the string at() member function is defined within the 
    //  class in two different ways to allow it to be used
    //  as an accessor and a mutator
    string x = "hello";
    x.at(0) = 'c';
    cout << x.at(0) << endl;
    
    return 0;
}