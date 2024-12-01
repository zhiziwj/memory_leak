# i f n d e f   M E M O R Y _ L E A K _ H  
 # d e f i n e   M E M O R Y _ L E A K _ H  
 # i n c l u d e   < i o s t r e a m >  
 # i n c l u d e   < m a p >  
 # i n c l u d e   < s t r i n g >  
 # i n c l u d e   < m a l l o c . h >  
 u s i n g   n a m e s p a c e   s t d ;  
 c l a s s   m e m o r y _ l {  
 	 p r i v a t e :  
 	 m a p < i n t , s t r i n g >   r ;  
 	 p u b l i c :  
 	 s t a t i c   m e m o r y _ l &   i n s t a n c e ( ) {  
 	 	 s t a t i c   m e m o r y _ l   a ;  
 	 	 r e t u r n   a ;  
 	 }  
 	 v o i d   i n s e r t ( v o i d *   p t r , c o n s t   c h a r *   f i l e , i n t   l i n e ) {  
 	 	 r [ i n t ( p t r ) ] = f i l e ;  
 	 }  
 	 v o i d   e r a s e ( v o i d *   p t r ) {  
 	 	 r . e r a s e ( i n t ( p t r ) ) ;  
 	 }  
 	 v o i d   p r i n t ( ) {  
 	 	 f o r ( a u t o   i t = r . b e g i n ( ) ; i t ! = r . e n d ( ) ; i t + + ) {  
 	 	 	 c o u t < < " m e m o r y   l e a k : " < < ( * i t ) . s e c o n d < < e n d l ;  
 	 	 }  
 	 	 r e t u r n ;  
 	 }  
 } ;  
 v o i d *   o p e r a t o r   n e w ( s i z e _ t   s i z e , c o n s t   c h a r *   f i l e , i n t   l i n e ) {  
 	 v o i d *   p t r = m a l l o c ( s i z e ) ;  
 	 m e m o r y _ l : : i n s t a n c e ( ) . i n s e r t ( p t r , f i l e , l i n e ) ; / / u s e   i t !  
 	 r e t u r n   p t r ;  
 }  
 v o i d *   o p e r a t o r   n e w [ ] ( s i z e _ t   s i z e , c o n s t   c h a r *   f i l e , i n t   l i n e ) {  
 	 v o i d *   p t r = m a l l o c ( s i z e ) ;  
 	 m e m o r y _ l : : i n s t a n c e ( ) . i n s e r t ( p t r , f i l e , l i n e ) ;  
 	 r e t u r n   p t r ;  
 }  
 v o i d   o p e r a t o r   d e l e t e ( v o i d *   p t r ) {  
 	 f r e e ( p t r ) ;  
 	 m e m o r y _ l : : i n s t a n c e ( ) . e r a s e ( p t r ) ;  
 }  
 v o i d   o p e r a t o r   d e l e t e [ ] ( v o i d *   p t r ) {  
 	 f r e e ( p t r ) ;  
 	 m e m o r y _ l : : i n s t a n c e ( ) . e r a s e ( p t r ) ;  
 }  
 # d e f i n e   n e w   n e w ( _ _ F I L E _ _ ,   _ _ L I N E _ _ )  
 # e n d i f   / / M E M O R Y _ L E A K _ H 