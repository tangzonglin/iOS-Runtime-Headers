/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBCompiledFilter : NSObject  {
    unsigned int _program;
    unsigned int _vao;
    unsigned int _vbo;
    unsigned int *_uniforms;
    int _uniformCount;
}

@property(readonly) unsigned int program;
@property(readonly) unsigned int* uniforms;
@property(readonly) int uniformCount;


- (void)dealloc;
- (int)uniformCount;
- (unsigned int*)uniforms;
- (unsigned int)program;
- (id)initWithProgram:(unsigned int)arg1 uniforms:(unsigned int*)arg2 uniformCount:(int)arg3;

@end