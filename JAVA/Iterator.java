import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Iterator;
class Main{
    public static void main(String args[])
    {
    List<String>demo=new LinkedList<>();
    demo.add("one");  
    demo.add("two");  
    demo.add("three");  
    demo.add("four");  
    demo.add("five");    
    demo.add("six");
    //System.out.println(demo);  
	
    new Main().printList(demo);
		
	}
    void printList(List<String>list)
    {
        Iterator<String> iterator=list.iterator();
        while(iterator.hasNext())
        {
            System.out.println("Element:"+iterator.next());
        }

    }
}
