(define (gen-list start end)
  (if (> start end)
     '()
     (cons start (gen-list (+ start 1) end))))

(define (sum lst)
 (if (null? lst)
     0
     (+ (car lst)
	(sum (cdr lst)))))
 
(define (retrieve-first-n n lst)
 (cond
    [(or (< n 1) (null? lst)) `()]
    [else (cons (car lst)
	(retrieve-first-n (- n 1) (cdr lst)))]))

(define (pair-sum? lst val)
 (cond
	[(or (null? lst) (null? (cdr lst))) #f]
	[(= (+ (car lst) (cadr lst)) val) #t]
	[else (pair-sum? (cdr lst) val)]))
