package Java.arry;

//import java.util.ArrayList;
import java.util.LinkedList;

public class AyLst {
	// static ArrayList<String> ListName = new ArrayList<>();

	public static void main(String[] args) {
		LinkedList<String> countries = new LinkedList<>();
		countries.add("India");
		countries.add("UAE");
		countries.add("USA");
		countries.add("bangla");
		countries.add("pakistan");
		System.out.println(countries.get(1));
		// System.out.println(countries);
		new AyLst().printList(countries);
      countries.add(0,"Maharatra");
     new AyLst().printList(countries);
      countries.set(5, "Banglor");
      new AyLst().printList(countries);
      countries.remove(2);
      new AyLst().printList(countries);
	}

	void printList(LinkedList<String> List) {
		for (String element :List) {

				
			System.out.println("Element:" + element);
			
		}
		System.out.println("******************");
	}
}
