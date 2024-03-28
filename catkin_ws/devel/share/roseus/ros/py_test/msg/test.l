;; Auto-generated. Do not edit!


(when (boundp 'py_test::test)
  (if (not (find-package "PY_TEST"))
    (make-package "PY_TEST"))
  (shadow 'test (find-package "PY_TEST")))
(unless (find-package "PY_TEST::TEST")
  (make-package "PY_TEST::TEST"))

(in-package "ROS")
;;//! \htmlinclude test.msg.html


(defclass py_test::test
  :super ros::object
  :slots (_num _name ))

(defmethod py_test::test
  (:init
   (&key
    ((:num __num) 0)
    ((:name __name) "")
    )
   (send-super :init)
   (setq _num (round __num))
   (setq _name (string __name))
   self)
  (:num
   (&optional __num)
   (if __num (setq _num __num)) _num)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:serialization-length
   ()
   (+
    ;; int64 _num
    8
    ;; string _name
    4 (length _name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int64 _num
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _num (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _num) (= (length (_num . bv)) 2)) ;; bignum
              (write-long (ash (elt (_num . bv) 0) 0) s)
              (write-long (ash (elt (_num . bv) 1) -1) s))
             ((and (class _num) (= (length (_num . bv)) 1)) ;; big1
              (write-long (elt (_num . bv) 0) s)
              (write-long (if (>= _num 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _num s)(write-long (if (>= _num 0) 0 #xffffffff) s)))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int64 _num
#+(or :alpha :irix6 :x86_64)
      (setf _num (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _num (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get py_test::test :md5sum-) "2024f0cf2e6302a28d69fe0f7dfcd317")
(setf (get py_test::test :datatype-) "py_test/test")
(setf (get py_test::test :definition-)
      "int64 num
string name
")



(provide :py_test/test "2024f0cf2e6302a28d69fe0f7dfcd317")


