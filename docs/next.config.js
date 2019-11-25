module.exports = {
  pageExtensions: ['bs.js', 'js'],
  webpack: config => {
    return Object.assign({}, config, {
      module: Object.assign({}, config.module, {
        rules: config.module.rules.concat([
          {
            test: /\.md$/,
            use: [
              {
                loader: 'emit-file-loader',
                options: {
                  name: 'dist/[path][name].[ext]',
                },
              }, 
              {
                loader: 'raw-loader',
              },
            ],
          },
        ]),
      }),
    })
  },
}