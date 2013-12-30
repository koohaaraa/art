#include "testApp.h"

//vector <Particle> particles;



//--------------------------------------------------------------
void testApp::setup(){
    ofEnableSmoothing();
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    ofBackground(0);
    for (int i=0;i<total;i++) {
        particles[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    for (int i=0;i<total;i++) {
        particles[i].display();
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();
    }

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    for (int i=0;i<total;i++) {
        particles[i].xmouse = x;
        particles[i].ymouse = y;
}
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    for (int i=0;i<total;i++) {
        particles[i].reset();
    }

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}


