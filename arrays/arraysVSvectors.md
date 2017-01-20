# Arrays vs Vectors: January 18, 2017

* Arrays use the subscript operator, [ ], to access individual elements
  * arr[0], arr[5], arr[3], arr[-1] on size 4 array, which are valid?
  * all of these will execute, some may crash the program with a segmentation fault, but an invalid index does not guarantee the program will crash
 
* No boundary checking for arrays

* Arrays don't have member functions
  * cannot use arr.size() or arr.push_back(43)

* Declaring an array: int name[100] = {1, 2, 3, 4};
 --- first 4 elements will be 1, 2, 3, 4
 --- remaining elements are initialized to zero 
        because you initialized at least 1 to a known 
 --- quick zero init: int name[100] = {0}; // 100 spots containing 0 value
 --- int name[100]; // 100 spots of unknwon values
        
* Arrays have a fixed size
 --- Often set up a capacity and a size, where size is the current size

* A function cannot return an array

* Assignment is different
 --- v1 = v2;        // allowed vectors
 --- arr1 = arr2;    // syntax error

* Output
 --- cout << v1 << endl; // sytax error
 --- cout << arr1 << endl; // allowed, but not useful to user

* Arrays are already a reference, & not needed when passed to a function
 --- void myFunc(int arr[]) NOT void myFunc(int &arr[])
