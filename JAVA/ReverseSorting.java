import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Collections;


class Main{
public static void main(String []args)
{
    List<Integer> demo=new LinkedList<>();
    demo.add(5);
    demo.add(1);
    demo.add(4);
    demo.add(7);
    demo.add(2);
    demo.add(3);
    demo.add(6);
    
new Main().printList(demo);
System.out.println("*******************************");
demo.sort(null);
new Main().printList(demo);
System.out.println("*******************************");
Collections.reverse(demo);
new Main().printList(demo);
}
void printList(List<Integer> list){
    Iterator<Integer> iterator=list.iterator();
    while(iterator.hasNext())
    {
        

       
        System.out.println("Element:"+iterator.next());
   
        }
    }
}
