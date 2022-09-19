#define QT_FEATURE_accessibility 1
#define QT_NO_ACCESSIBILITY_ATSPI_BRIDGE 
#define QT_FEATURE_action 1
#define QT_FEATURE_opengles2 -1
#define QT_FEATURE_dynamicgl 1
#define QT_OPENGL_DYNAMIC true
#define QT_FEATURE_angle 1
#define QT_OPENGL_ES_2_ANGLE true
#define QT_FEATURE_clipboard 1
#define QT_FEATURE_colornames 1
#define QT_FEATURE_combined_angle_lib -1
#define QT_FEATURE_cssparser 1
#define QT_FEATURE_cursor 1
#define QT_FEATURE_desktopservices 1
#define QT_FEATURE_imageformat_xpm 1
#define QT_FEATURE_draganddrop 1
#define QT_FEATURE_opengl 1
#define QT_FEATURE_imageformatplugin 1
#define QT_FEATURE_highdpiscaling 1
#define QT_FEATURE_im 1
#define QT_FEATURE_image_heuristic_mask 1
#define QT_FEATURE_image_text 1
#define QT_FEATURE_imageformat_bmp 1
#define QT_FEATURE_imageformat_jpeg 1
#define QT_FEATURE_imageformat_png 1
#define QT_FEATURE_imageformat_ppm 1
#define QT_FEATURE_imageformat_xbm 1
#define QT_FEATURE_movie 1
#define QT_FEATURE_opengles3 -1
#define QT_FEATURE_opengles31 -1
#define QT_FEATURE_opengles32 -1
#define QT_FEATURE_openvg -1
#define QT_FEATURE_pdf 1
#define QT_FEATURE_picture 1
#define QT_FEATURE_sessionmanager 1
#define QT_FEATURE_shortcut 1
#define QT_FEATURE_standarditemmodel 1
#define QT_FEATURE_systemtrayicon 1
#define QT_FEATURE_tabletevent 1
#define QT_FEATURE_texthtmlparser 1
#define QT_FEATURE_textodfwriter 1
#define QT_FEATURE_validator 1
#define QT_FEATURE_vulkan -1
#define QT_FEATURE_whatsthis 1
#define QT_FEATURE_wheelevent 1

// Use OpenGL ES for Android (ES 3.1 = API 21 = 5.0) and iOS
#if defined(Q_OS_ANDROID) || defined(Q_OS_IOS)
#ifndef QT_OPENGL_ES
  #define QT_OPENGL_ES
#endif
#ifndef QT_OPENGL_ES_2
  #define QT_OPENGL_ES_2
#endif
#ifndef QT_OPENGL_ES_3
  #define QT_OPENGL_ES_3
#endif
#ifndef QT_OPENGL_ES_3_1
  #define QT_OPENGL_ES_3_1
#endif
#endif
