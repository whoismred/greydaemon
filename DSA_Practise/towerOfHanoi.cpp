/*Tower of Hanoi
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :
1) Only one disk can be moved at a time.
2) A disk can be moved only if it is on the top of a rod.
3) No disk can be placed on the top of a smaller disk. */


void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here
  
    
    //Base case
    if(n>0){  
         if(n==1){
        // we can move directly from source to destination   
        cout<<source<<" "<<destination<<endl;
            return;
    }
   

    //induction step
    else{
    towerOfHanoi(n-1, source, destination, auxiliary);
    cout<<source<<" "<<destination<<endl;
    
    
    towerOfHanoi(n-1, auxiliary,source,destination);
    
 }
 }
}
