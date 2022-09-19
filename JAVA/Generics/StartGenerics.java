package clll;

class Data {
	private Object obj;

	public Data(Object obj) {
		super();
		this.obj = obj;
	}

	public Object getObj() {
		return obj;
	}

	@Override
	public String toString() {
		return "data [obj=" + obj + "]";
	}

}

class GenericClass<T> {
	private T data;

	public GenericClass(T data) {
		super();
		this.data = data;
	}

	public T getData() {
		return data;
	}

	@Override
	public String toString() {
		return "GenericClass [data=" + data + "]";
	}

}

public class LL {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	Data data=new Data("Some String");
	String var=(String)data.getObj();

System.out.println(var);
		
		GenericClass<String> genericdata=new <String>GenericClass("Some String");
		String get=genericdata.getData();
		System.out.println(get);
	}

}
