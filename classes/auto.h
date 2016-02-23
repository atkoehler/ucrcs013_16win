// 2) Write the class definition for an automobile. Your class should be called Automobile and contain 
// data fields and function prototypes needed to simulate an automobile object within a computer game.  
// You are writing the class definition, you are not implementing the actual class.

#ifndef AUTO_H
#define AUTO_H

class Automobile {
    private:
        int cylinders;
        int color;
        double speed;
        int diretion;
        double gas;
        bool isAutomatic;
        
    public:
        void changeDirection(int dir);
        void accelerate(double s);
        
    private:
    
};
#endif