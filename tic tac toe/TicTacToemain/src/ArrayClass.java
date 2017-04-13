import java.util.ArrayList;


class ArrayClass {
    
    ArrayList<String> tic = new ArrayList<String>(); // for X
    ArrayList<String> tac = new ArrayList<String>(); // for O
       
    public  void addition(String name, int x){   
            
            if(x == 0){
                tic.add(name);
            }else if(x == 1){
                tac.add(name);
            }
            
        }
        
        public boolean check(String name){
            
            
            boolean x = tic.contains(name);
            boolean y = tac.contains(name);
            if(x){
                return x;
            }else if(y){
                return y;
            }
            else{
                return false;
            }
               
        }
        
        public void clear(){
            tic.clear();
            tac.clear();
        }
        
        public int winner(){
            
            if((tic.contains("A1") && tic.contains("A2") && tic.contains("A3")) || (tac.contains("A1") && tac.contains("A2") && tac.contains("A3"))){
                if((tic.contains("A1") && tic.contains("A2") && tic.contains("A3"))){
                    return 1; 
                }else{
                    return 2;
                }
                
            }else if((tic.contains("B1") && tic.contains("B2") && tic.contains("B3")) || (tac.contains("B1") && tac.contains("B2") && tac.contains("B3"))){
                if((tic.contains("B1") && tic.contains("B2") && tic.contains("B3"))){
                    return 1;
                }else{
                    return 2;
                }
                
            }else if((tic.contains("C1") && tic.contains("C2") && tic.contains("C3")) || (tac.contains("C1") && tac.contains("C2") && tac.contains("C3"))){
                if((tic.contains("C1") && tic.contains("C2") && tic.contains("C3"))){
                    return 1;
                }else{
                    return 2;
                }
            }else if((tic.contains("A1") && tic.contains("B1") && tic.contains("C1")) || (tac.contains("A1") && tac.contains("B1") && tac.contains("C1"))){
                if((tic.contains("A1") && tic.contains("B1") && tic.contains("C1"))){
                    return 1;
                }else{
                    return 2;
                }
            }else if((tic.contains("A2") && tic.contains("B2") && tic.contains("C2")) || (tac.contains("A2") && tac.contains("B2") && tac.contains("C2"))){
                if((tic.contains("A2") && tic.contains("B2") && tic.contains("C2"))){
                    return 1;
                }else{
                    return 2;
                }
            }else if((tic.contains("A3") && tic.contains("B3") && tic.contains("C3")) || (tac.contains("A3") && tac.contains("B3") && tac.contains("C3"))){
                if((tic.contains("A3") && tic.contains("B3") && tic.contains("C3"))){
                    return 1;
                }else{
                    return 2;
                }
            }else if((tic.contains("A1") && tic.contains("B2") && tic.contains("C3")) || (tac.contains("A1") && tac.contains("B2") && tac.contains("C3"))){
                if((tic.contains("A1") && tic.contains("B2") && tic.contains("C3"))){
                    return 1;
                }else{
                    return 2;
                }
            }else if((tic.contains("A3") && tic.contains("B2") && tic.contains("C1")) || (tic.contains("A3") && tic.contains("B2") && tic.contains("C1"))){
                if((tic.contains("A3") && tic.contains("B2") && tic.contains("C1"))){
                    return 1;
                }else{
                    return 2;
                }
            }else if((tic.size() + tac.size()) == 9){
                return 3;
            }else{
                return 0;
            }
            

        }
    
}
