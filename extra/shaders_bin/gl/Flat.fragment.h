static const uint8_t Flat_fragment_gl[292] =
{
	0x46, 0x53, 0x48, 0x06, 0xe3, 0xc2, 0x5c, 0x65, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // FSH....e.......u
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x6c, // _color.......u_l
	0x69, 0x67, 0x68, 0x74, 0x44, 0x69, 0x72, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0xf2, 0x00, 0x00, // ightDir.........
	0x00, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // .in vec3 v_norma
	0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // l;.uniform vec4 
	0x75, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // u_color;.uniform
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x44, 0x69, 0x72, //  vec4 u_lightDir
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // .  vec4 tmpvar_1
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, // ;.  tmpvar_1.xyz
	0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x78, 0x79, 0x7a, 0x20, //  = (u_color.xyz 
	0x2a, 0x20, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x76, 0x5f, // * ((.    dot (v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x44, // normal, u_lightD
	0x69, 0x72, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x35, // ir.xyz).   * 0.5
	0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // ) + 0.5));.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // var_1.w = u_colo
	0x72, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, // r.w;.  gl_FragCo
	0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, // lor = tmpvar_1;.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};