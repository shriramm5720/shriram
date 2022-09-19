package clll;

import java.util.LinkedList;
import java.util.List;
import java.util.Iterator;

class Data<Y>{
private Y boj;

public Data(Y boj) {
	super();
	this.boj = boj;
}

public Y getBoj() {
	return boj;
}

@Override
public String toString() {
	return "Data [boj=" + boj + "]";
}

}


public class LL {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	List<Data<Object>> sc=new LinkedList<>();
	sc.add(new Data<Object>("Some"));
	sc.add(new Data<Object>(10.5));
	sc.add(new Data<Object>(true));
	sc.add(new Data<Object>(15));
	new LL().printList(sc);

}
	void printList(List<Data<Object>> list) {
		
		Iterator<Data<Object>> iteration=list.iterator();
		while(iteration.hasNext()) {
			System.out.println(iteration.next());
		}
	}
}
