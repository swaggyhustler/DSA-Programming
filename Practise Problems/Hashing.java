import java.util.*;
class Hashing{
    public static void main(String args[]){
        charCounter();
    }
    public void max_min_freq(){
        int[] arr={1,2,1,6,2,7};
        int max=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;
        Hashtable<Integer, Integer> freq = new Hashtable<>();
        

    }
    public static void charCounter(){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        char[] ch=str.toCharArray();
        int[] freq= new int[27];
        Arrays.fill(freq, 0); // To have a default value as 0's in the array initially
        for(int i=0; i<ch.length; i++){
            if(ch[i]==' '){
                continue;
            }
            freq[ch[i]-'a']++;
        }
        String target=sc.next();
        System.out.println(freq[target.charAt(0)-'a']);

    }
    public static void bruteForceApproach(){
        Integer[] arr={4,3,4,4,1,2,9,1,1};
        Arrays.sort(arr);
        Boolean[] visited = new Boolean[arr[arr.length-1]+1];
        for(int i=0; i<arr.length; i++){
            int count=0;
            if(visited[arr[i]]==null){
                visited[arr[i]]=true;
                for(int j=0; j<arr.length; j++){
                    if(arr[j]==arr[i]){
                        count++;
                    }
                }
                System.out.println(arr[i]+" "+count);
            }
        }
    }
    public static void hashTableApproach(){
        Hashtable<Integer, Integer> freq=new Hashtable<>();
        Integer[] arr={4,3,4,4,1,2,9,1,1};
        for(int i=0; i<arr.length; i++){
            Integer x=freq.get(arr[i]);
            if(x!=null){
                freq.put(arr[i], ++x);
            }else{
                freq.put(arr[i], 1);
            }
        }
        Iterator it = freq.entrySet().iterator();
        while(it.hasNext()){
            Map.Entry mapEle = (Map.Entry) it.next();
            int key=(int)mapEle.getKey();
            int value=(int)mapEle.getValue();
            System.out.println(key+" "+value);
        }
    }
}