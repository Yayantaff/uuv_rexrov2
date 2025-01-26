#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/constance/uuv_ws/src/uuv_simulation_evaluation/uuv_simulation_evaluation"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/constance/uuv_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/constance/uuv_ws/install/lib/python3/dist-packages:/home/constance/uuv_ws/build/uuv_simulation_evaluation/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/constance/uuv_ws/build/uuv_simulation_evaluation" \
    "/usr/bin/python3" \
    "/home/constance/uuv_ws/src/uuv_simulation_evaluation/uuv_simulation_evaluation/setup.py" \
     \
    build --build-base "/home/constance/uuv_ws/build/uuv_simulation_evaluation" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/constance/uuv_ws/install" --install-scripts="/home/constance/uuv_ws/install/bin"
