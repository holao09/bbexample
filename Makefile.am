AUTOMAKE_OPTIONS = foreign

CFLAGS = -Wall -pedantic -O2 $(OPENCV_CFLAGS)

AM_LDFLAGS = -fopenmp -lopencv_gapi -lopencv_stitching -lopencv_aruco -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_dnn_objdetect -lopencv_dnn_superres -lopencv_dpm -lopencv_highgui -lopencv_face -lopencv_fuzzy -lopencv_hfs -lopencv_img_hash  -lopencv_line_descriptor -lopencv_quality  -lopencv_reg -lopencv_rgbd -lopencv_saliency -lopencv_stereo -lopencv_structured_light -lopencv_phase_unwrapping -lopencv_superres -lopencv_optflow -lopencv_surface_matching -lopencv_tracking -lopencv_datasets -lopencv_text -lopencv_dnn -lopencv_plot -lopencv_videostab -lopencv_videoio -lopencv_xfeatures2d -lopencv_shape -lopencv_ml -lopencv_ximgproc -lopencv_video -lopencv_xobjdetect -lopencv_objdetect -lopencv_calib3d -lopencv_imgcodecs -lopencv_features2d -lopencv_flann -lopencv_xphoto -lopencv_photo -lopencv_imgproc -lopencv_core

include_HEADERS =  C_call_CPP.h 

lib_LTLIBRARIES = libCPP.la 
libCPP_la_SOURCES  = CPP.cpp C_call_CPP.cpp
libCPP_la_LDFLAGS= -version-info 1:0:0

bin_PROGRAMS = bbexample
bbexample_SOURCES = main.cpp
bbexample_LDADD = libCPP.la 
