public class WhoIsWhat {
	public static void main (String[] args) {
		String temp;
		String[] name={"Marnoris","Zyhmet","Vana","KJ","Nobody","Everybody"};
		String[] des={"dead","the best","good with babes","less coward than goldie","sneaky","hungry"};
		
		int nameL = name.length;
		int desL= des.length;
		
		while(true) {
			int r1 = (int) (Math.random() * nameL);
			int r2 = (int) (Math.random() * desL);
			
			temp= name[r1];
			name[r1]= name[--nameL];
			name[nameL]= temp;
			
			temp= des[r2];
			des[r2]= des[--desL];
			des[desL]= temp;
			
			System.out.println(name[nameL] + " is " + des[desL] );
			if( (nameL) <= 0 ){
				break;
			}
			if( (desL) <= 0 ){
				break;
			}
		}
	}
}
