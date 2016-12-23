; Auto-generated. Do not edit!


(cl:in-package robomuse-msg)


;//! \htmlinclude msg2.msg.html

(cl:defclass <msg2> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:integer
    :initform 0)
   (y
    :reader y
    :initarg :y
    :type cl:integer
    :initform 0))
)

(cl:defclass msg2 (<msg2>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <msg2>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'msg2)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robomuse-msg:<msg2> is deprecated: use robomuse-msg:msg2 instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <msg2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robomuse-msg:x-val is deprecated.  Use robomuse-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <msg2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robomuse-msg:y-val is deprecated.  Use robomuse-msg:y instead.")
  (y m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <msg2>) ostream)
  "Serializes a message object of type '<msg2>"
  (cl:let* ((signed (cl:slot-value msg 'x)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'y)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <msg2>) istream)
  "Deserializes a message object of type '<msg2>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'x) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'y) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<msg2>)))
  "Returns string type for a message object of type '<msg2>"
  "robomuse/msg2")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'msg2)))
  "Returns string type for a message object of type 'msg2"
  "robomuse/msg2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<msg2>)))
  "Returns md5sum for a message object of type '<msg2>"
  "bd7b43fd41d4c47bf5c703cc7d016709")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'msg2)))
  "Returns md5sum for a message object of type 'msg2"
  "bd7b43fd41d4c47bf5c703cc7d016709")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<msg2>)))
  "Returns full string definition for message of type '<msg2>"
  (cl:format cl:nil "int32 x~%int32 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'msg2)))
  "Returns full string definition for message of type 'msg2"
  (cl:format cl:nil "int32 x~%int32 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <msg2>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <msg2>))
  "Converts a ROS message object to a list"
  (cl:list 'msg2
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
))
