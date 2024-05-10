(define (member? x L) ;recursively checks x being equal to the first element of list L
  (cond
    [(empty? L) #f] ;list empty?
    [(equal? x (first L)) #t] ;then is x equal?
    [else (member? x (rest L))] ;then is x a member of the list?
  )
)
(define (subset? L1 L2)
  (define (helper L1 L2)
    (cond
      [(empty? L1) #t]
      [(member? (first L1) L2) ;checks to see if the first element of L1 exists in L2
       (helper (rest L1) L2)] ;if yes go recursive
      [else #f])) ;otherwise L1 isnt a subset of L2
  (helper L1 L2))

(define (set-equal? L1 L2)
  (and (subset? L1 L2) (subset? L2 L1))) ;define the 'set-equal?' function using the 'subset' function

(define (union S1 S2)
  (cond
    [(empty? S1) S2] ; If S1 empty, return S2
    [(member? (first S1) S2) ;first element of S1 is in S2?
     (union (rest S1) S2)] ;then proceed with the rest of S1
    [else (cons (first S1) (union (rest S1) S2))])) ;Otherwise, add the first element of S1 to the union

(define (intersect S1 S2)
  (cond
    [(empty? S1) '()];If S1 is empty then so is intersection
    [(member? (first S1) S2);first element of S1 is in S2?
     (cons (first S1) (intersect (rest S1) S2))] ;then add into the intersection and proceed with S1
    [else (intersect (rest S1) S2)])) ; Otherwise, continue with the rest of S1