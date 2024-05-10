#lang racket
(define (member? x L) ;defines function, checks if x is a member of list L
  (cond
    [(null? L) #f] ;base case
    [(equal? x (car L)) #t]
    [else (member? x (cdr L))]))

(define (subset? L1 L2) ;defines function to recursively check if L1 is a member of L2
  (cond
    [(null? L1) #t] ;base case
    [(member? (car L1) L2) ;checks for the first element of L1 is in L2
     (subset? (cdr L1) L2)] ;checks the rest of L1
    [else #f])) ;first element L1 is not in L2, therefore L1 isn't a subset

(define (set-equal? L1 L2) ;uses early defined subset function to check if lists L1 and L2 have the same members
  (and (subset? L1 L2) (subset? L2 L1)))

(define (union S1 S2) ;defines function, creates unions of sets S1 and S2 recursively
  (cond
    [(null? S1) S2] ;Base case
    [(member? (car S1) S2)
     (union (cdr S1) S2)] ;first element of S1 is in S2, go for the rest of S1
    [else (cons (car S1) (union (cdr S1) S2))])) ;else add first element of S1 to S2

(define (intersect S1 S2) ;defines function, creates intersection of sets S1 and S2 recursively 
  (cond
    [(null? S1) '()] ;base case
    [(member? (car S1) S2)
     (cons (car S1) (intersect (cdr S1) S2))] ;first element of S1 is in S2, add to intersection
    [else (intersect (cdr S1) S2)])) ;else go thru the rest of S1