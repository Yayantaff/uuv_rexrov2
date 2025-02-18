; Auto-generated. Do not edit!


(cl:in-package ds_hotel_msgs-msg)


;//! \htmlinclude XrSimState.msg.html

(cl:defclass <XrSimState> (roslisp-msg-protocol:ros-message)
  ((stamp
    :reader stamp
    :initarg :stamp
    :type cl:real
    :initform 0)
   (idx
    :reader idx
    :initarg :idx
    :type cl:fixnum
    :initform 0)
   (dcams_actual
    :reader dcams_actual
    :initarg :dcams_actual
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil))
   (wires_actual
    :reader wires_actual
    :initarg :wires_actual
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil))
   (dcams_cmds
    :reader dcams_cmds
    :initarg :dcams_cmds
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil))
   (wires_cmds
    :reader wires_cmds
    :initarg :wires_cmds
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil))
   (motor_secs
    :reader motor_secs
    :initarg :motor_secs
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (burnwire_secs
    :reader burnwire_secs
    :initarg :burnwire_secs
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (short_deadsecs
    :reader short_deadsecs
    :initarg :short_deadsecs
    :type cl:float
    :initform 0.0)
   (deadsecs
    :reader deadsecs
    :initarg :deadsecs
    :type cl:float
    :initform 0.0)
   (acoustic_code
    :reader acoustic_code
    :initarg :acoustic_code
    :type cl:fixnum
    :initform 0)
   (dcam_open_pct
    :reader dcam_open_pct
    :initarg :dcam_open_pct
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (wire_burn_pct
    :reader wire_burn_pct
    :initarg :wire_burn_pct
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass XrSimState (<XrSimState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <XrSimState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'XrSimState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ds_hotel_msgs-msg:<XrSimState> is deprecated: use ds_hotel_msgs-msg:XrSimState instead.")))

(cl:ensure-generic-function 'stamp-val :lambda-list '(m))
(cl:defmethod stamp-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:stamp-val is deprecated.  Use ds_hotel_msgs-msg:stamp instead.")
  (stamp m))

(cl:ensure-generic-function 'idx-val :lambda-list '(m))
(cl:defmethod idx-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:idx-val is deprecated.  Use ds_hotel_msgs-msg:idx instead.")
  (idx m))

(cl:ensure-generic-function 'dcams_actual-val :lambda-list '(m))
(cl:defmethod dcams_actual-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:dcams_actual-val is deprecated.  Use ds_hotel_msgs-msg:dcams_actual instead.")
  (dcams_actual m))

(cl:ensure-generic-function 'wires_actual-val :lambda-list '(m))
(cl:defmethod wires_actual-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:wires_actual-val is deprecated.  Use ds_hotel_msgs-msg:wires_actual instead.")
  (wires_actual m))

(cl:ensure-generic-function 'dcams_cmds-val :lambda-list '(m))
(cl:defmethod dcams_cmds-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:dcams_cmds-val is deprecated.  Use ds_hotel_msgs-msg:dcams_cmds instead.")
  (dcams_cmds m))

(cl:ensure-generic-function 'wires_cmds-val :lambda-list '(m))
(cl:defmethod wires_cmds-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:wires_cmds-val is deprecated.  Use ds_hotel_msgs-msg:wires_cmds instead.")
  (wires_cmds m))

(cl:ensure-generic-function 'motor_secs-val :lambda-list '(m))
(cl:defmethod motor_secs-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:motor_secs-val is deprecated.  Use ds_hotel_msgs-msg:motor_secs instead.")
  (motor_secs m))

(cl:ensure-generic-function 'burnwire_secs-val :lambda-list '(m))
(cl:defmethod burnwire_secs-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:burnwire_secs-val is deprecated.  Use ds_hotel_msgs-msg:burnwire_secs instead.")
  (burnwire_secs m))

(cl:ensure-generic-function 'short_deadsecs-val :lambda-list '(m))
(cl:defmethod short_deadsecs-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:short_deadsecs-val is deprecated.  Use ds_hotel_msgs-msg:short_deadsecs instead.")
  (short_deadsecs m))

(cl:ensure-generic-function 'deadsecs-val :lambda-list '(m))
(cl:defmethod deadsecs-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:deadsecs-val is deprecated.  Use ds_hotel_msgs-msg:deadsecs instead.")
  (deadsecs m))

(cl:ensure-generic-function 'acoustic_code-val :lambda-list '(m))
(cl:defmethod acoustic_code-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:acoustic_code-val is deprecated.  Use ds_hotel_msgs-msg:acoustic_code instead.")
  (acoustic_code m))

(cl:ensure-generic-function 'dcam_open_pct-val :lambda-list '(m))
(cl:defmethod dcam_open_pct-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:dcam_open_pct-val is deprecated.  Use ds_hotel_msgs-msg:dcam_open_pct instead.")
  (dcam_open_pct m))

(cl:ensure-generic-function 'wire_burn_pct-val :lambda-list '(m))
(cl:defmethod wire_burn_pct-val ((m <XrSimState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_hotel_msgs-msg:wire_burn_pct-val is deprecated.  Use ds_hotel_msgs-msg:wire_burn_pct instead.")
  (wire_burn_pct m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <XrSimState>) ostream)
  "Serializes a message object of type '<XrSimState>"
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'stamp)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'stamp) (cl:floor (cl:slot-value msg 'stamp)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
  (cl:let* ((signed (cl:slot-value msg 'idx)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'dcams_actual))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'dcams_actual))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'wires_actual))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'wires_actual))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'dcams_cmds))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'dcams_cmds))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'wires_cmds))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'wires_cmds))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'motor_secs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'motor_secs))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'burnwire_secs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'burnwire_secs))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'short_deadsecs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'deadsecs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'acoustic_code)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'dcam_open_pct))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'dcam_open_pct))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'wire_burn_pct))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'wire_burn_pct))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <XrSimState>) istream)
  "Deserializes a message object of type '<XrSimState>"
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'stamp) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'idx) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'dcams_actual) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'dcams_actual)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'wires_actual) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'wires_actual)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'dcams_cmds) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'dcams_cmds)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'wires_cmds) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'wires_cmds)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'motor_secs) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'motor_secs)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'burnwire_secs) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'burnwire_secs)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'short_deadsecs) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'deadsecs) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'acoustic_code)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'dcam_open_pct) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'dcam_open_pct)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'wire_burn_pct) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'wire_burn_pct)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<XrSimState>)))
  "Returns string type for a message object of type '<XrSimState>"
  "ds_hotel_msgs/XrSimState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'XrSimState)))
  "Returns string type for a message object of type 'XrSimState"
  "ds_hotel_msgs/XrSimState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<XrSimState>)))
  "Returns md5sum for a message object of type '<XrSimState>"
  "61a12b72d95554795d5956ac77f9546d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'XrSimState)))
  "Returns md5sum for a message object of type 'XrSimState"
  "61a12b72d95554795d5956ac77f9546d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<XrSimState>)))
  "Returns full string definition for message of type '<XrSimState>"
  (cl:format cl:nil "time stamp~%~%# XR Index~%int8 idx~%~%# Actual state of things, as of last report~%bool[] dcams_actual~%bool[] wires_actual~%~%# Currently-commanded state~%bool[] dcams_cmds~%bool[] wires_cmds~%~%# Seconds burnwire, etc are to remain active~%float32[] motor_secs~%float32[] burnwire_secs~%~%# Short deadman~%float32 short_deadsecs~%~%# Long deadman~%float32 deadsecs~%~%# This is an acoustic command code that gets passed along to the status message~%uint8 acoustic_code~%~%# How open a dcam is (from 0% to 100%)~%float32[] dcam_open_pct~%~%# Values for burned a wire is.  From \"100\" for fully intact to \"0\" ~%# for fully burned~%float32[] wire_burn_pct~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'XrSimState)))
  "Returns full string definition for message of type 'XrSimState"
  (cl:format cl:nil "time stamp~%~%# XR Index~%int8 idx~%~%# Actual state of things, as of last report~%bool[] dcams_actual~%bool[] wires_actual~%~%# Currently-commanded state~%bool[] dcams_cmds~%bool[] wires_cmds~%~%# Seconds burnwire, etc are to remain active~%float32[] motor_secs~%float32[] burnwire_secs~%~%# Short deadman~%float32 short_deadsecs~%~%# Long deadman~%float32 deadsecs~%~%# This is an acoustic command code that gets passed along to the status message~%uint8 acoustic_code~%~%# How open a dcam is (from 0% to 100%)~%float32[] dcam_open_pct~%~%# Values for burned a wire is.  From \"100\" for fully intact to \"0\" ~%# for fully burned~%float32[] wire_burn_pct~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <XrSimState>))
  (cl:+ 0
     8
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'dcams_actual) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'wires_actual) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'dcams_cmds) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'wires_cmds) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'motor_secs) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'burnwire_secs) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4
     4
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'dcam_open_pct) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'wire_burn_pct) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <XrSimState>))
  "Converts a ROS message object to a list"
  (cl:list 'XrSimState
    (cl:cons ':stamp (stamp msg))
    (cl:cons ':idx (idx msg))
    (cl:cons ':dcams_actual (dcams_actual msg))
    (cl:cons ':wires_actual (wires_actual msg))
    (cl:cons ':dcams_cmds (dcams_cmds msg))
    (cl:cons ':wires_cmds (wires_cmds msg))
    (cl:cons ':motor_secs (motor_secs msg))
    (cl:cons ':burnwire_secs (burnwire_secs msg))
    (cl:cons ':short_deadsecs (short_deadsecs msg))
    (cl:cons ':deadsecs (deadsecs msg))
    (cl:cons ':acoustic_code (acoustic_code msg))
    (cl:cons ':dcam_open_pct (dcam_open_pct msg))
    (cl:cons ':wire_burn_pct (wire_burn_pct msg))
))
