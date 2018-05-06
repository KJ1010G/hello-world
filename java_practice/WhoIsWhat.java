public class WhoIsWhat {
	public static void main (String[] args) {
		String temp;
		String[] name={"Marnoris","Zyhmet","Vana","KJ","Nobody","Everybody"};
		String[] des={"dead","the best","good with babes","less coward than goldie","sneaky","hungry"};
		
		int nameL = name.length;
		int desL= des.length;
		
		int r1, r2;
		
		while(nameL > 0 || desL > 0) {
			r1 = (int) (Math.random() * nameL);
			r2 = (int) (Math.random() * desL);
			
			System.out.println(name[r1] + " is " + des[r2] );
			
			name[r1]= name[--nameL];
			des[r2]= des[--desL];
		}
	}
}
