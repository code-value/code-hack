/**
 * HardCopyArray
 */
public class HardCopyArray {

    public static int[][] hardCopyArray2D(int[][] peta) {
        /*
        Membuat hardcopy untuk array dari peta sehingga terdapat cadangan
        array sebagai tempat temporary value 
        */
        int[][] newPeta = new int[peta.length][peta.length];
        for(int i=0; i<peta.length;i++){
            for(int j=0; j<peta.length;j++){
                newPeta[i][j] =  peta[i][j];
            }
        }return newPeta;
        
    }

    public static void main(String[] args) {
        int[][] array = {{1,2,3,4}, {2,3,4,5}};

        int[][] hardcopy = hardCopyArray2D(array);

    }
}