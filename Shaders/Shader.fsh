//
//  Shader.fsh
//  iHello
//
//  Created by Martin on 13.05.12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
