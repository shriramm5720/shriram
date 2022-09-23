package clll;

import java.util.HashMap;
import java.util.Map;

public class Maps {

	public static void main(String[] args) {
		Map<Integer, String> stud=new HashMap<>();
		stud.put(1, "Raaju");
		stud.put(2, "Manju");
		stud.put(3, "nashu");
		
		System.out.println(stud);
		for(Map.Entry<Integer,String> entry : stud.entrySet())
		{
			System.out.println(entry);
		}

	}

}
