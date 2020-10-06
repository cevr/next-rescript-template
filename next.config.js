const bsconfig = require("./bsconfig.json");

const transpileModules = ["bs-platform"].concat(bsconfig["bs-dependencies"]);
const withTM = require("next-transpile-modules")(transpileModules);

const config = {
  target: "serverless",
  transpileModules: ["bs-platform"].concat(bsconfig["bs-dependencies"]),
};

module.exports = withTM(config);
