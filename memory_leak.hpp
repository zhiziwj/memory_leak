# i f d e f   M E M O R Y _ L E A K  
 # d e f i n e   M E M O R Y _ L E A K  
 c l a s s   m c o u n t e r {  
 	 p r i v a t e :  
 	 s t r i n g   n a m e _ ;  
 	 l o n g   l o n g   i n t   c n t ;  
 	 p u b l i c :  
 	 m c o u n t e r ( c o n s t   c h a r *   s t r ) {  
 	 	 n a m e _ = s t r ;  
 	 	 c n t = 0 ;  
 	 }  
 	 ~ m c o u n t e r ( ) {  
 	 	 c o u t < < " c l a s s : " < < n a m e _ < < e n d l ;  
 	 	 c o u t < < " c n t : " < < c n t < < e n d l ;  
 	 }  
 	 v o i d   a d d ( ) {  
 	 	 c n t + + ;  
 	 }  
 	 v o i d   s u b ( ) {  
 	 	 c n t - - ;  
 	 	 a s s e r t ( c n t > = 0 ) ; / / c h e c k   c n t  
 	 }  
 } ;  
 t e m p l a t e < t y p e n a m e   T >  
 c l a s s   c o u n t e r _ c p {  
 	 p r i v a t e :  
 	 s t a t i c   m c o u n t e r   t h e _ c l a s s ;  
 	 p u b l i c :  
 	 c o u n t e r _ c p ( ) {  
 	 	 t h e _ c l a s s . a d d ( ) ;  
 	 }  
 	 ~ c o u n t e r _ c p ( ) {  
 	 	 t h e _ c l a s s . s u b ( ) ;  
 	 }  
 	 c o u n s t _ c p ( c o n s t   c o u n t e r _ c p & ) {  
 	 	 t h e _ c l a s s . a d d ( ) ;  
 	 }  
 } ;  
 t e m p l a t e < t y p e n a m e   T >  
 m c o u n t e r   c o u n t e r _ c p < T > : : t h e _ c l a s s ( t y p e d ( T ) . n a m e ( ) ) ;  
 # e n d i f   / / M E M O R Y _ L E A K 