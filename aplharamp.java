public class aplharamp {
    public static void alphaRamp(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                char m=(char)('A'+i-1);
                System.out.print(m+" ");
            }
            System.out.println("");
        }
    }
}
