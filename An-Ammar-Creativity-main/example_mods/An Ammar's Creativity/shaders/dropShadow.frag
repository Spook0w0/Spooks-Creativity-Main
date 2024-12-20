#pragma header
//its important to have this bit here. it inits all the importan OpenFL shader shits like the image's coordinates and size.


uniform float _alpha; //transparancy of the drop shadow
uniform float _disx; // x distance
uniform float _disy; // y distance
uniform bool inner; // an inside shadow
uniform bool inverted; // inverted inner shadow
uniform bool knockout; // inverted inner shadow





vec2 uv = openfl_TextureCoordv.xy;
// uv: coordinate of a pixel. usually replaces 'fragCoord.xy / iResolution.xy';
vec2 size = openfl_TextureSize.xy;
// size: size of the full image. usually replaces 'iResolution.xy';

void main(void){

vec4 color = texture2D( bitmap, uv);
// so i don't have to type out texture2d(bla bla bla ) and shit

vec2 distance = vec2(_disx,_disy)/size;
//distance vector 

if(inner){
	vec4 shadow = flixel_texture2D( bitmap, uv-distance);
	shadow.rgb = vec3(0.0);
	shadow.a = 1-shadow.a;
	shadow.a *= color.a;
	vec3 result;
	if(inverted){
		result = color.rgb * (shadow.a+color.a*(1-_alpha)); // for that cool lighting
	}else{
		result = color.rgb * ((1-shadow.a )+shadow.a*(1-_alpha)); 
	}
	gl_FragColor =  vec4(result,color.a);
	if(knockout)gl_FragColor = (shadow*_alpha);
}else{

	vec4 shadow = flixel_texture2D( bitmap, uv-distance);
	shadow.rgb = vec3(0.0);
	shadow.a *= _alpha;
	gl_FragColor = shadow + color;
	if(knockout && color.a > 0.0)gl_FragColor = vec4(0.0,0.0,0.0,0.0);

}
	//bitmap: the original graphic of the camera or sprite. usually replaces iChannel0 
	//texture2D: a 4type Vector that returns the image. replaces texture
	//gl_FragColor: the result. usually replaces fragColor
}